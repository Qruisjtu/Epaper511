//511.h实现文件
#include"511.h"

/*******************网络模块**************************/
//WiFi 配置
const char* ssid="511";
const char* password ="guofangwei";
//api配置
String weatherurl="http://apis.juhe.cn/simpleWeather/query";
String weathercity="上海";//修改天气位置
//String key="ef670a1bc22e8ac69bdb5cd12716bd39";

//wifi连接,请在511.cpp中更改ssid和password
void wificonnect(){
    Serial.println("Connecting to    ");
    Serial.print(ssid);
    WiFi.begin(ssid,password);
    while (WiFi.status()!=WL_CONNECTED){
        digitalWrite(LED_GPIO,HIGH);
        delay(500);
        Serial.print('.');
        digitalWrite(LED_GPIO,LOW); 
        delay(500); 
    }
    Serial.println();
    Serial.println("WiFi connected");
    Serial.println("IP address:");
    Serial.print(WiFi.localIP());
    Serial.println();
}

//通过API获得最新北京时间戳,更新RTC模块
void setTime(){
//发送网络请求
  HTTPClient http;
  //http.begin(url+"?city="+city+"&key="+key);
  bool isgettime=1;
  Serial.print("联网获取时间中\r\n");
  while(isgettime){
    http.begin("http://apis.juhe.cn/fapigx/worldtime/query?key=91e19239e8956af5027136df3c5cfe64&city=上海");
    int http_code=http.GET();
    if(http_code==200){
      isgettime=0;
      Serial.print("获取成功\r\n");
    }else{
      Serial.print("获取失败,十秒后重新请求\r\n");
    }
    delay(10000);
  }
  String timeresponse=http.getString();
  http.end();
  //解析json数据
  DynamicJsonDocument doc(1024);
  deserializeJson(doc,timeresponse);
  setenv("TZ","CST-8",1);
  tzset();
  const time_t nowtime=doc["result"]["timestamp"].as<int64_t>()+6;
  struct timeval tv={.tv_sec=nowtime};
  settimeofday(&tv,NULL);
  doc.clear();
  Serial.print("时间联网设置成功\r\n");
}

//联网获取天气情况,n<=5为往后预报的天数,记得deleteWeather
void getWeather(Weather &weather,int n){
  HTTPClient http;
  bool isgetweather=1;
  Serial.print("联网获取天气中\r\n");
  while(isgetweather){
    http.begin(weatherurl+"?city="+weathercity+"&key=ef670a1bc22e8ac69bdb5cd12716bd39");
    int http_code=http.GET();
    if(http_code==200){
      isgetweather=0;
      Serial.print("获取成功\r\n");
    }else{
      Serial.print("获取失败,十秒后重新请求\r\n");
    }
    delay(10000);
  }
  String weatherresponse=http.getString();
  http.end();
  //解析json数据
  DynamicJsonDocument doc(1024);
  Serial.println(weatherresponse);
  deserializeJson(doc,weatherresponse);
  //创建Weather链表联系明后天天气
  Weather *p,*q;
  p=&weather;
  q=p;
  weather.city=doc["result"]["city"].as<String>();
  weather.info=doc["result"]["realtime"]["info"].as<String>();
  weather.temp=doc["result"]["realtime"]["temperature"].as<int8_t>();
  weather.humidity=doc["result"]["realtime"]["humidity"].as<int8_t>();
  weather.aqi=doc["result"]["realtime"]["aqi"].as<int8_t>();
  //仅获取后两天的预报天气
  for(int i=0;i<n;i++){
    p=new Weather;
    q->nextday=p;
    q=p;
    q->predictday=doc["result"]["future"][i]["date"].as<String>();
    q->info=doc["result"]["future"][i]["weather"].as<String>();
    q->daytemp=doc["result"]["future"][i]["temperature"].as<String>();
  }
  doc.clear();
  Serial.print("天气联网设置成功\r\n");
  p=q=NULL;
}
//析构Weather动态分配的内存,n为要析构的次数
void deleteWeather(Weather &weather,int n){
  Weather *p,*q;
  p=q=&weather;
  for(int i=0;i<n;i++){
    p=q->nextday;
    q=p;
    delete p;
  }
  p=q=NULL;
}

//获取当前时间,tm格式
void getTime(tm &timeinfo_get){
  time_t now_get;
  time(&now_get);
  localtime_r(&now_get,&timeinfo_get);
}

//天气测试函数
void weatherreporttest(){
  wificonnect();
  delay(1000);
  Weather weatherinfo;
  getWeather(weatherinfo,2);
  Serial.printf("天气情况: 目前%s: %s %d°C\r\n明天:%s %s\r\n",weatherinfo.city.c_str(),weatherinfo.info.c_str(),weatherinfo.temp,weatherinfo.nextday->info.c_str(),weatherinfo.nextday->daytemp.c_str());
  Serial.printf("后天天气%s",weatherinfo.nextday->nextday->info.c_str());
  deleteWeather(weatherinfo,2);
}



/*************绘图模块 ***********************************/
//选择帧(打印未选择的帧会导致花屏!)
void frame::activate(){
  Paint_NewImage(thisframe,epaperw,epaperh,180,WHITE);
  Paint_SelectImage(thisframe);
  //selected=1;
  Serial.print("选择帧成功\r\n");
}
void frame::clear(){
  Paint_Clear(WHITE);
}
void frame::windowsclear(UWORD Xstart, UWORD Ystart, UWORD Xend, UWORD Yend, UWORD Color){
  Paint_ClearWindows(Xstart,Ystart,Xend,Yend,Color);
}
void frame::point(UWORD Xpoint, UWORD Ypoint, UWORD Color=BLACK, DOT_PIXEL Dot_Pixel, DOT_STYLE Dot_FillWay){
  Paint_DrawPoint(Xpoint,Ypoint,Color,Dot_Pixel,Dot_FillWay);
}
void frame::printchar(UWORD Xstart, UWORD Ystart, const char Acsii_Char, sFONT* Font,UBYTE style){
  if(style==0){
    Paint_DrawChar(Xstart,Ystart,Acsii_Char,Font,BLACK,WHITE);
  }
  else{
    Paint_DrawChar(Xstart,Ystart,Acsii_Char,Font,WHITE,BLACK);
  }
}
void frame::printstr(UWORD Xstart, UWORD Ystart, const char * pString,UBYTE lang,UBYTE fontnum,UBYTE style){
  sFONT* Fonts=&Font8;
  cFONT* Fontc=&Font12CN;
  switch(fontnum){
    case 0: Fonts=&Font8;Fontc=&Font12CN;break;
    case 1: Fonts=&Font12;Fontc=&Font24CN;break;
    case 2: Fonts=&Font16;break;
    case 3: Fonts=&Font20;break;
    case 4: Fonts=&Font24;break;
    default:;
  }
  if(lang==0){
    if(style==0){
      Paint_DrawString_EN(Xstart,Ystart,pString,Fonts,WHITE,BLACK);
    }
    else{
      Paint_DrawString_EN(Xstart,Ystart,pString,Fonts,BLACK,WHITE);
    }
  }
  else if(lang==1){
    if(style==0){
      Paint_DrawString_CN(Xstart,Ystart,pString,Fontc,BLACK,WHITE);
    }
    else{
      Paint_DrawString_CN(Xstart,Ystart,pString,Fontc,WHITE,BLACK);
    }
  }
}

void frame::printnum(UWORD Xstart, UWORD Ystart,int32_t Nummber,UBYTE fontnum,UBYTE style){
  sFONT* Fonts=&Font8;
  switch(fontnum){
    case 0: Fonts=&Font8;break;
    case 1: Fonts=&Font12;break;
    case 2: Fonts=&Font16;break;
    case 3: Fonts=&Font20;break;
    case 4: Fonts=&Font24;break;
    default:;
  } 
  if(style==0){
   Paint_DrawNum(Xstart,Ystart,Nummber,Fonts,BLACK,WHITE);
  }
  else{
    Paint_DrawNum(Xstart,Ystart,Nummber,Fonts,WHITE,BLACK);
  }
}
void frame::printpic(const unsigned char* image_buffer){
  Paint_DrawBitMap(image_buffer);
}
void frame::display(){
  EPD_5IN83_V2_Display(thisframe);
  Serial.print("打印帧成功\r\n");
}

//frame测试函数
void frametest(){
  epaperinit();
  frame aframe;
  aframe.activate();
  aframe.clear();
  aframe.printstr(0,0,"hello world",0,3);
  aframe.display();
  delay(3000);
  frame bframe;
  bframe.activate();
  bframe.clear();
  bframe.printstr(epaperw/2-32*3,epaperh/2-41/2,"你好,微雪电子.",1,0);
  bframe.display();
  delay(5000);
  ClearPage();
  SleepMode();
}
/*************按钮模块 ***********************************/
bool Button::isPressed(){
  if(digitalRead(pin)){
      delay(debounceDelay);
      if(digitalRead(pin)&&!status){
        status = !status;
        return 1;
      }else if(!digitalRead(pin)){
        status = false;
      }
  }else{
    status=false;
  }
  return 0;
}