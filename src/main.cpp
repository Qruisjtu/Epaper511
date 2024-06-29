/* Includes ------------------------------------------------------------------*/
#include "DEV_Config.h"
#include "EPD.h"
#include "GUI_Paint.h"
#include "imagedata.h"
#include "511.h"
#include <stdlib.h>
#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>
//WiFi 配置
const char* ssid="511";
const char* password ="guofangwei";
//api配置
String url="http://apis.juhe.cn/simpleWeather/query";
String city="上海";
String key="ef670a1bc22e8ac69bdb5cd12716bd39";

newimage *desktop;


void setup()
{
  //串口
  Serial.begin(115200);
  delay(10);
  //WiFi 连接
  Serial.println("Connecting to    ");
  Serial.print(ssid);
  WiFi.begin(ssid,password);
  while (WiFi.status()!=WL_CONNECTED){
    delay(500);
    Serial.print('.');
  }
  Serial.println();
  Serial.println("WiFi connected");
  Serial.println("IP address:");
  Serial.print(WiFi.localIP());
  Serial.println();
  //发送网络请求
  HTTPClient http;
  http.begin("http://api.k780.com/?app=life.time&appkey=10003&sign=b59bc3ef6191eb9f747dd4e83c99f2a4&format=json");
  
  //http.begin(url+"?city="+city+"&key="+key);
  int http_code=http.GET();
  Serial.printf("HTTP 状态码:%d\n",http_code);
  String timeresponse=http.getString();
  //String weatherresponse=http.getString();
  Serial.print("响应数据:");
  //Serial.println(weatherresponse);
  Serial.println(timeresponse);
  http.end();
  //解析json数据
  DynamicJsonDocument doc(1024);
  deserializeJson(doc,timeresponse);
  // deserializeJson(doc, weatherresponse);
  // unsigned int temp = doc["result"]["realtime"]["temperature"].as<unsigned int>();
  const char* timeinfo = doc["result"]["datetime_1"].as<const char*>();
  // int aqi = doc["result"]["realtime"]["aqi"].as<int>();



  //e-paper
  epaperinit();
  desktop=(UBYTE *)malloc(imagebyte);
  Paint_NewImage(desktop,epaperw,epaperh,180,WHITE);
#if 1
  Paint_SelectImage(desktop);
  Paint_Clear(WHITE);
  Paint_DrawString_EN(0,0,timeinfo,&Font24,WHITE,BLACK);
  EPD_5IN83_V2_Display(desktop);
#endif
}

/* The main loop -------------------------------------------------------------*/
void loop()
{
  ClearPage();
  HTTPClient http;
  http.begin("http://api.k780.com/?app=life.time&appkey=10003&sign=b59bc3ef6191eb9f747dd4e83c99f2a4&format=json");
  String timeresponse=http.getString();
  http.end();
  DynamicJsonDocument doc(1024);
  deserializeJson(doc,timeresponse);
  const char* timeinfo = doc["result"]["datetime_1"].as<const char*>();
  Paint_SelectImage(desktop);
  Paint_Clear(WHITE);
  Paint_DrawString_EN(0,0,timeinfo,&Font24,BLACK,WHITE);
  EPD_5IN83_V2_Display(desktop);

  delay(200);

}


