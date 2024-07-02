/**
* @File      	  :	511.h
* @Author         : Qruisjtu
* @Function       : Simplify and Pack the use of Paint functions&HTTP communication functions
* @Info           :
*  epaperinit()    :initialize e-paper
*  ClearPage()     :Clear e-paper
*  SleepMode()     :Switch to sleep mode
*  epaperw,epaperh :screen size bits
*  imagebyte       :image c-file size
*  frame           :basic paint unit,encapsulated from GUI_Paint
*----------------
* |	This version:   V1.0
* | Date        :   2024-06-28
* | Info        :   Alpha version
**/

#ifndef _511_h
#define _511_h
    //all includes
    #include"DEV_Config.h"
    #include"EPD.h"
    #include"GUI_Paint.h"
    #include"ImageData.h"
    #include <time.h>
    #include <WiFi.h>
    #include <HTTPClient.h>
    #include <ArduinoJson.h>
    #include <stdlib.h>
    #include <cstring>
    //e-paper relative functions
    //initize the e-paper(5.83inch)
    #define epaperinit() {DEV_Module_Init();EPD_5IN83_V2_Init();EPD_5IN83_V2_Clear();Serial.print("初始化成功\r\n");delay(500);}
    //Clear e-paper
    #define ClearPage() {Serial.print("Clear Page\r\n");EPD_5IN83_V2_Clear();}
    //Switch to sleep mode
    #define SleepMode() {Serial.print("Go to sleep\r\n");EPD_5IN83_V2_Sleep();}
    #define epaperw EPD_5IN83_V2_WIDTH
    #define epaperh EPD_5IN83_V2_HEIGHT
    #define newimage UBYTE
    #define imagebyte (((EPD_5IN83_V2_WIDTH % 8 == 0) ? (EPD_5IN83_V2_WIDTH / 8 ) : (EPD_5IN83_V2_WIDTH / 8 + 1)) * EPD_5IN83_V2_HEIGHT)
    #define LED_GPIO 2
    
    //wifi relative function
    //注意天气有实时和预报,内容不同,用*nextday联系
    struct Weather{
        String city;
        String info;//天气情况,预报和实时都有
        int8_t temp;
        int8_t humidity;
        int8_t aqi;
        Weather *nextday;
        String predictday;String daytemp;//仅预报有   
    };
    void wificonnect();
    void setTime();
    void getTime(tm &timeinfo_get);
    void getWeather(Weather &weather,int n);
    void deleteWeather(Weather &weather,int n);




    //paint related function
    class frame{
        private:
            newimage *thisframe;
        public:
            frame(){
                thisframe=(newimage *)malloc(imagebyte);
                Serial.print("帧构造成功\r\n");
            }
            ~frame(){
                free(thisframe);
                thisframe=NULL;
                Serial.print("删除帧成功\r\n");
            }
            void activate();
            void clear();
            void windowsclear(UWORD Xstart, UWORD Ystart, UWORD Xend, UWORD Yend, UWORD Color=WHITE);
            void point(UWORD Xpoint, UWORD Ypoint, UWORD Color, DOT_PIXEL Dot_Pixel=DOT_PIXEL_1X1, DOT_STYLE Dot_FillWay=DOT_FILL_RIGHTUP);
            //style=0白底黑字,style=1黑底白字
            void printchar(UWORD Xstart, UWORD Ystart, const char Acsii_Char, sFONT* Font,UBYTE style=0);
            /*lang=0英文模式(默认),lang=1中英文模式(建议)*/
            /***|字体对照表(fontnum)|:
            英文:|0-font8(默认)|1-font12|2-font16|3-font20|4-font24|
            中文:|0-font12CN(默认)|1-font24CN|*/
            /*style=0白底黑字(默认),style=1黑底白字*/
            void printstr(UWORD Xstart, UWORD Ystart, const char * pString,UBYTE lang=0,UBYTE fontnum=0,UBYTE style=0);
            /*|字体对照表(fontnum)|:
            |0-font8(默认)|1-font12|2-font16|3-font20|4-font24|*/
            /*style=0白底黑字(默认),style=1黑底白字*/
            void printnum(UWORD Xstart, UWORD Ystart,int32_t Nummber,UBYTE fontnum,UBYTE style=0);
            //写入图片数据
            void printpic(const unsigned char* image_buffer);
            //打印帧
            void display();
    };

#endif