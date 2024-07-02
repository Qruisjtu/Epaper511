/**
* | File      	:	511.h
* | Author      :   qruisjtu
* | Function    :	simplify the use of functions
* | Info        :
*   init()          :initize the e-paper(5.83inch)
*   newimage *image :create a storage for image
*   initimage(newimage *image):initize a new image
*   ClearPage()     :Clear e-paper
*   SleepMode()     :Switch to sleep mode
*   
*----------------
* |	This version:   V1.0
* | Date        :   2024-06-28
* | Info        :   Alpha version
 */

#ifndef _511_h
#define _511_h

    #include"DEV_Config.h"
    #include"EPD.h"
    #include"GUI_Paint.h"
    #include <time.h>
    #include <WiFi.h>
    #include <HTTPClient.h>
    #include <ArduinoJson.h>
    //e-paper relative functions
    //initize the e-paper(5.83inch)
    #define epaperinit() {DEV_Module_Init();EPD_5IN83_V2_Init();EPD_5IN83_V2_Clear();delay(500);}
    //Clear e-paper
    #define ClearPage() {Serial.print("Clear Page\r\n");EPD_5IN83_V2_Clear();}
    //Switch to sleep mode
    #define SleepMode() {Serial.print("Go to sleep\r\n");EPD_5IN83_V2_Sleep();}
    #define epaperw EPD_5IN83_V2_WIDTH
    #define epaperh EPD_5IN83_V2_HEIGHT
    #define newimage UBYTE
    #define imagebyte (((EPD_5IN83_V2_WIDTH % 8 == 0) ? (EPD_5IN83_V2_WIDTH / 8 ) : (EPD_5IN83_V2_WIDTH / 8 + 1)) * EPD_5IN83_V2_HEIGHT)
    
    
    //wifi relative function
    void wificonnect();
    void setTime();
    void getTime(tm &timeinfo_get);
    
    class frame{
        private:
            newimage *thisframe;
            //bool selected;
        public:
            frame(){
                thisframe=(newimage *)malloc(imagebyte);
                //selected=0;
                //Serial.print("帧构造成功\r\n");
            }
            ~frame(){
                free(thisframe);
                thisframe=NULL;
            }
            void activate();
            void clear();
            void windowsclear(UWORD Xstart, UWORD Ystart, UWORD Xend, UWORD Yend, UWORD Color=WHITE);
            void point(UWORD Xpoint, UWORD Ypoint, UWORD Color, DOT_PIXEL Dot_Pixel=DOT_PIXEL_1X1, DOT_STYLE Dot_FillWay=DOT_FILL_RIGHTUP);
            //style=0白底黑字,style=1黑底白字
            void printchar(UWORD Xstart, UWORD Ystart, const char Acsii_Char, sFONT* Font,UBYTE style=0);
            /*lang=0英文模式(默认),lang=1中英文模式(建议)*/
            /*style=0白底黑字(默认),style=1黑底白字*/
            /*字体对照表:
            英文:0-font8(默认);1-font12;2-font16;3-font20;4-font24;
            中文:0-font12CN(默认);1-font24CN;*/
            void printstr(UWORD Xstart, UWORD Ystart, const char * pString,UBYTE lang=0,UBYTE fontnum=0,UBYTE style=0);
            /*style=0白底黑字(默认),style=1黑底白字*/
            /*字体对照表:
            0-font8(默认);1-font12;2-font16;3-font20;4-font24;*/
            void printnum(UWORD Xstart, UWORD Ystart,int32_t Nummber,UBYTE fontnum,UBYTE style=0);
            void printpic(const unsigned char* image_buffer);
            void display();
    };

#endif