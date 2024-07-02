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
  //wificonnect();
  delay(1000);
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
  bframe.printstr(epaperw/2-32*3,epaperh/2-41/2,"你好,微雪电子.",1,1);
  bframe.display();
  delay(5000);
  ClearPage();
  SleepMode();
}

/* The main loop -------------------------------------------------------------*/
void loop()
{
  

}


