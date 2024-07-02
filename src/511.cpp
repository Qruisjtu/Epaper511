#include"511.h"
#define LED_GPIO 2


/*******************网络模块**************************/
//WiFi 配置
const char* ssid="511";
const char* password ="guofangwei";
//api配置
// String url="http://apis.juhe.cn/simpleWeather/query";
// String city="上海";
// String key="ef670a1bc22e8ac69bdb5cd12716bd39";

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
  while(isgettime){
    http.begin("http://apis.juhe.cn/fapigx/worldtime/query?key=91e19239e8956af5027136df3c5cfe64&city=上海");
    int http_code=http.GET();
    Serial.printf("HTTP 状态码:%d\n",http_code);
    if(http_code==200){
    //String weatherresponse=http.getString();
      isgettime=0;
      Serial.print("获取成功\r\n");
    }
    delay(5000);
  }
  String timeresponse=http.getString();
  //Serial.print("响应数据:");
  //Serial.println(weatherresponse);
  //Serial.println(timeresponse);
  http.end();
  //解析json数据
  DynamicJsonDocument doc(1024);
  deserializeJson(doc,timeresponse);
  // deserializeJson(doc, weatherresponse);
  // unsigned int temp = doc["result"]["realtime"]["temperature"].as<unsigned int>();
 
  // int aqi = doc["result"]["realtime"]["aqi"].as<int>();
  setenv("TZ","CST-8",1);
  tzset();
  const time_t nowtime=doc["result"]["timestamp"].as<int64_t>()+6;
  struct timeval tv={.tv_sec=nowtime};
  settimeofday(&tv,NULL);
  doc.clear();
  Serial.print("时间联网设置成功\r\n");
}


//获取当前时间,tm格式
void getTime(tm &timeinfo_get){
  time_t now_get;
  time(&now_get);
  localtime_r(&now_get,&timeinfo_get);
}


/*************绘图模块 ***********************************/
//选择帧
void frame::activate(){
  Paint_NewImage(thisframe,epaperw,epaperh,180,WHITE);
  Paint_SelectImage(thisframe);
  //selected=1;
  //Serial.print("选择帧成功\r\n");
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
      Paint_DrawString_EN(Xstart,Ystart,pString,Fonts,BLACK,WHITE);
    }
    else{
      Paint_DrawString_EN(Xstart,Ystart,pString,Fonts,WHITE,BLACK);
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
}