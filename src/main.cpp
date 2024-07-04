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
  //循环检测按钮是否按下
  if(beginB.isPressed()){
    if(!isopen){
      epaperinit();
      startpage.activate();
      startpage.clear();
      startpage.printstr(epaperw/2-26*14/2,epaperh/2-20,"Welcome!connecting to wifi",0,3);
      startpage.printstr(epaperw/2-16*14/2,epaperh/2+20,"Powered by 511.h",0,3);
      startpage.display();
      isopen=1;
      wificonnect();
      //获取最新的时间和天气
      //getWeather(weatherinfo,2);
      setTime();

    }else{ 
      //关机之后的操作
      startpage.clear();
      startpage.printstr(epaperw/2-10*14/2,epaperh/2-20/2,"Quiting...",0,3);
      startpage.display();
      //手动释放内存
      //deleteWeather(weatherinfo,2);
      delay(1000);
      ClearPage();
      SleepMode();
      isopen=0;
      runonce=0;
      count=1;
    }
  }
  //如果开机,则执行:
  if(isopen){
    //开机时只运行一次的命令
    getTime(timeinfo);
    if(!runonce){
      startpage.clear();
      startpage.printtime(440,70,&timeinfo,4);
      startpage.display();
      runonce=1;
    }
    //开机后一直运行的指令
    if(timeinfo.tm_sec==0){
      epaperinit();
      startpage.clear();
      startpage.printtime(440,70,&timeinfo,4);
      startpage.display();
      SleepMode();
    }
    if(nextB.isPressed()){
      //next按钮被按下
      count++;
      // startpage.clear();
      // startpage.printpicH(gImage_vsc);
      // startpage.printnum(count*5,count*5,count,4);
      // startpage.display();
    }
  }
  delay(100);//监测按钮状态间隔
}

