#include "511.h"
//一些功能测试函数
void frametest(){
  epaperinit();
  frame aframe;
  aframe.activate();
  aframe.clear();
  aframe.printstr(0,0,"hello world",0,4);
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

/* setup --------------------------------------------------------------------*/
void setup()
{
  pinMode(LED_GPIO,OUTPUT);
  Serial.begin(115200);//串口
  wificonnect();
  delay(1000);
  Weather weatherinfo;
  getWeather(weatherinfo,2);
  Serial.printf("天气情况: 目前%s: %s %d°C\r\n明天:%s %s",weatherinfo.city.c_str(),weatherinfo.info.c_str(),weatherinfo.temp,weatherinfo.nextday->info.c_str(),weatherinfo.nextday->daytemp.c_str());
  Serial.printf("后天天气%s",weatherinfo.nextday->nextday->info.c_str());
  deleteWeather(weatherinfo,2);
}

/* The main loop -------------------------------------------------------------*/
void loop()
{
  

}


