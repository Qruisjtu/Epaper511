#include "511.h"
//pinMode(LED_GPIO,OUTPUT);//测试用LED灯

Button beginB(beginb_GPIO);//开机/关机按钮
Button nextB(nextb_GPIO);//next按钮
Button confirmB(confirmb_GPIO);//确认按钮
frame startpage;//起始界面
Weather weatherinfo;//天气结构体
tm timeinfo;//时间结构体
int count=1;
bool isopen=0;
bool runonce=0;

/* setup --------------------------------------------------------------------*/
void setup()
{
  Serial.begin(115200);//打开串口监视
}

/* The main loop -------------------------------------------------------------*/
void loop()
{ 
}

