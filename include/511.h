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
    #include"GUI_Paint.h"
    //initize the e-paper(5.83inch)
    #define epaperinit() {DEV_Module_Init();EPD_5IN83_V2_Init();EPD_5IN83_V2_Clear();delay(500);}
    //Clear e-paper
    #define ClearPage() EPD_5IN83_V2_Clear()
    //Switch to sleep mode
    #define SleepMode() EPD_5IN83_V2_Sleep()
    #define epaperw EPD_5IN83_V2_WIDTH
    #define epaperh EPD_5IN83_V2_HEIGHT
    #define newimage UBYTE
    #define imagebyte (((EPD_5IN83_V2_WIDTH % 8 == 0) ? (EPD_5IN83_V2_WIDTH / 8 ) : (EPD_5IN83_V2_WIDTH / 8 + 1)) * EPD_5IN83_V2_HEIGHT)

#endif