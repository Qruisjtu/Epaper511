/* Includes ------------------------------------------------------------------*/
#include "DEV_Config.h"
#include "EPD.h"
#include "GUI_Paint.h"
#include "imagedata.h"
#include "511.h"
#include <stdlib.h>
#include <cstring>
#define LED_GPIO 2

/* setup 函 数 体--------------------------------------------------------------------*/
void setup()
{
  
  pinMode(LED_GPIO,OUTPUT);
  //串口
  Serial.begin(115200);
  wificonnect();
  delay(1000);
  epaperinit();
  frame aframe;
  aframe.activate();
  aframe.clear();
  aframe.printstr(0,0,"hello world",4);
  aframe.display();
  delay(3000);
  frame bframe;
  bframe.activate();//测试display前是否一定要activate
  bframe.clear();
  bframe.printstr(0,epaperh/2,"你好世界",6,1);
  bframe.display();
  delay(5000);
  ClearPage();
  SleepMode();
  // epaperinit();
  // newimage *timeframe=NULL;
  // timeframe=(newimage *)malloc(imagebyte);
  // Paint_NewImage(timeframe,epaperw,epaperh,180,WHITE);
  // Paint_SelectImage(timeframe);
  // tm timeinfo;
  // for(int i=0;i<10;i++){
  // ClearPage();
  // getTime(timeinfo);
  // Paint_Clear(WHITE);
  // Paint_DrawNum(0,0,timeinfo.tm_hour,&Font24,BLACK,WHITE);
  // Paint_DrawChar(36,0,':',&Font24,BLACK,WHITE);
  // Paint_DrawNum(36*2,0,timeinfo.tm_min,&Font24,BLACK,WHITE);
  // Paint_DrawChar(36*3,0,':',&Font24,BLACK,WHITE);
  // Paint_DrawNum(36*4,0,timeinfo.tm_sec,&Font24,BLACK,WHITE);
  // EPD_5IN83_V2_Display(timeframe);
  // delay(10000);
  // }
  // free(timeframe);
  // SleepMode();

}

/* The main loop -------------------------------------------------------------*/
void loop()
{
  

}


