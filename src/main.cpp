#include "511.h"
//pinMode(LED_GPIO,OUTPUT);//测试用LED灯
Button beginB(beginb_GPIO);
Button nextB(nextb_GPIO);
Button confirmB(confirmb_GPIO);
bool isopen=0;
bool once=0;
/* setup --------------------------------------------------------------------*/
void setup()
{
  Serial.begin(115200);//串口set up

}
frame basicframe;
int count=1;
/* The main loop -------------------------------------------------------------*/
void loop()
{ 
  if(beginB.isPressed()){
    if(!isopen){
      epaperinit();
      basicframe.activate();
      basicframe.clear();
      isopen=1;
    }else{ 
      basicframe.clear();
      basicframe.printstr(epaperw/2-10*14/2,epaperh/2-20/2,"Quiting...",0,3);
      basicframe.display();
      delay(1000);
      ClearPage();
      SleepMode();
      isopen=0;
      once=0;
      count=1;
    }
  }
  if(isopen){
    if(!once){
      basicframe.clear();
      basicframe.printnum(epaperw/2,epaperh/2,count,4);
      basicframe.display();
      once=1;
    }
    if(nextB.isPressed()){
        count++;
        basicframe.clear();
        basicframe.printnum(epaperw/2,epaperh/2,count,4);
        basicframe.display();
    }
  }
  delay(100);
}


