/*
******
  * @file    Font12.c
  * @author  Xu
  * @date    5-July-2024
  * @brief   This file provides text Font24 for weather of "Weather"

*/

#include"fonts.h"

// 
//  Font data_Weather for Courier New 24pt
// 

const CH_CN  Font24CN_Weather_Table[] =
{
/*--  文字:  晴  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"晴",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x00,0x00,0x00,0x0E,0x00,
0x00,0x00,0x0E,0x00,0x7F,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0x7F,0xEF,0xFF,0xFE,
0x78,0xE0,0x0E,0x00,0x78,0xEF,0xFF,0xFE,0x78,0xEF,0xFF,0xFE,0x78,0xEF,0xFF,0xFE,
0x78,0xE0,0x0E,0x00,0x78,0xFF,0xFF,0xFF,0x78,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,
0x7F,0xE0,0x00,0x00,0x7F,0xE7,0xFF,0xFC,0x78,0xE7,0xFF,0xFC,0x78,0xE7,0xFF,0xFC,
0x78,0xE7,0x00,0x1C,0x78,0xE7,0xFF,0xFC,0x78,0xE7,0xFF,0xFC,0x78,0xE7,0xFF,0xFC,
0x78,0xE7,0x00,0x1C,0x78,0xE7,0xFF,0xFC,0x7F,0xE7,0xFF,0xFC,0x7F,0xE7,0xFF,0xFC,
0x7F,0xE7,0x00,0x1C,0x78,0xE7,0x00,0x1C,0x38,0xE7,0x0F,0xFC,0x00,0x07,0x0F,0xFC,
0x00,0x07,0x0F,0xF8,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  雨  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"雨",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFE,0x00,0x03,0xC0,0x00,
0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x3F,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFC,
0x3F,0xFF,0xFF,0xFC,0x3C,0x03,0xC0,0x3C,0x3C,0x03,0xC0,0x3C,0x3D,0xC3,0xDC,0x3C,
0x3F,0xE3,0xFE,0x3C,0x3D,0xFB,0xFF,0xBC,0x3C,0xFF,0xCF,0xFC,0x3C,0x3B,0xC3,0xFC,
0x3C,0x1B,0xC1,0xBC,0x3D,0x03,0xC0,0x3C,0x3F,0xC3,0xFC,0x3C,0x3F,0xE3,0xFE,0x3C,
0x3D,0xFB,0xFF,0xBC,0x3C,0xFF,0xCF,0xFC,0x3C,0x3B,0xC7,0xFC,0x3C,0x13,0xC1,0xBC,
0x3C,0x03,0xC0,0x3C,0x3C,0x03,0xC0,0x3C,0x3C,0x03,0xCF,0xFC,0x3C,0x03,0xCF,0xF8,
0x3C,0x03,0xCF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  雪  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"雪",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xF0,
0x1F,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xF8,0x00,0x03,0xC0,0x00,0x3F,0xFF,0xFF,0xFC,
0x7F,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFE,0x78,0x03,0xC0,0x1E,0x7B,0xFB,0xDF,0xDE,
0x7F,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFE,0x00,0x03,0xC0,0x00,0x03,0xFB,0xDF,0xC0,
0x07,0xFF,0xFF,0xE0,0x07,0xFF,0xFF,0xE0,0x00,0x03,0xC0,0x00,0x1F,0xFF,0xFF,0xF0,
0x1F,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,
0x0F,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x78,
0x00,0x00,0x00,0x78,0x1F,0xFF,0xFF,0xF8,0x3F,0xFF,0xFF,0xF8,0x3F,0xFF,0xFF,0xF8,
0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  大  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"大",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,
0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,
0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x07,0xC0,0x00,0x00,0x07,0xC0,0x00,
0x00,0x07,0xE0,0x00,0x00,0x07,0xE0,0x00,0x00,0x0F,0xE0,0x00,0x00,0x0F,0xF0,0x00,
0x00,0x0F,0xF0,0x00,0x00,0x1E,0x78,0x00,0x00,0x3E,0x7C,0x00,0x00,0x3C,0x3C,0x00,
0x00,0x7C,0x3E,0x00,0x00,0xF8,0x1F,0x00,0x03,0xF0,0x0F,0xC0,0x07,0xE0,0x07,0xE0,
0x0F,0xC0,0x03,0xF8,0x3F,0x80,0x01,0xFF,0xFF,0x00,0x00,0xFF,0xFC,0x00,0x00,0x3E,
0x78,0x00,0x00,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  中  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"中",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,
0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,
0x00,0x03,0xC0,0x00,0x3F,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFC,
0x3C,0x03,0xC0,0x3C,0x3C,0x03,0xC0,0x3C,0x3C,0x03,0xC0,0x3C,0x3C,0x03,0xC0,0x3C,
0x3C,0x03,0xC0,0x3C,0x3C,0x03,0xC0,0x3C,0x3C,0x03,0xC0,0x3C,0x3F,0xFF,0xFF,0xFC,
0x3F,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFC,0x3C,0x03,0xC0,0x3C,0x3C,0x03,0xC0,0x3C,
0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,
0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,
0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  小  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"小",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xC0,0x00,0x00,0x03,0xE0,0x00,
0x00,0x03,0xE0,0x00,0x00,0x03,0xE0,0x00,0x00,0x03,0xE0,0x00,0x00,0x03,0xE0,0x00,
0x00,0x03,0xE0,0x00,0x01,0x83,0xE0,0x00,0x03,0xE3,0xE7,0x80,0x03,0xE3,0xE7,0xC0,
0x03,0xC3,0xE3,0xC0,0x07,0xC3,0xE3,0xE0,0x07,0x83,0xE1,0xE0,0x07,0x83,0xE1,0xF0,
0x0F,0x83,0xE0,0xF0,0x0F,0x03,0xE0,0xF8,0x1F,0x03,0xE0,0x78,0x1E,0x03,0xE0,0x7C,
0x3E,0x03,0xE0,0x7C,0x3C,0x03,0xE0,0x3E,0x7C,0x03,0xE0,0x3E,0x78,0x03,0xE0,0x1F,
0xF8,0x03,0xE0,0x1F,0xF0,0x03,0xE0,0x0E,0x30,0x03,0xE0,0x00,0x00,0x03,0xE0,0x00,
0x00,0x03,0xE0,0x00,0x00,0xE7,0xC0,0x00,0x00,0xFF,0xC0,0x00,0x00,0xFF,0xC0,0x00,
0x00,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  暴  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"暴",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xF0,
0x0F,0xFF,0xFF,0xF0,0x0F,0xFF,0xFF,0xF0,0x0F,0x00,0x00,0x70,0x0F,0xFF,0xFF,0xF0,
0x0F,0xFF,0xFF,0xF0,0x0F,0xFF,0xFF,0xF0,0x0F,0x00,0x00,0x70,0x0F,0xFF,0xFF,0xF0,
0x0F,0xFF,0xFF,0xF0,0x0F,0xFF,0xFF,0xF0,0x00,0x78,0x1E,0x00,0x3F,0xFF,0xFF,0xFC,
0x3F,0xFF,0xFF,0xFC,0x1F,0xFF,0xFF,0xF8,0x00,0x78,0x1E,0x00,0x7F,0xFF,0xFF,0xFE,
0x7F,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFE,0x01,0xF1,0xCF,0x80,0x07,0xF3,0xCF,0xE0,
0x1F,0xFF,0xFF,0xF8,0xFF,0x3F,0xFE,0xFF,0xFC,0x0F,0xD8,0x3F,0x70,0x7F,0xFE,0x0E,
0x0F,0xFF,0xFF,0xE0,0x1F,0xF3,0xDF,0xF8,0x1F,0x7F,0xC1,0xF8,0x00,0x7F,0xC0,0x00,
0x00,0x3F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  多  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"多",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xC0,0x00,0x00,0x0F,0x80,0x00,
0x00,0x1F,0x00,0x00,0x00,0x3F,0xFF,0xF8,0x00,0xFF,0xFF,0xF8,0x01,0xFF,0xFF,0xF8,
0x07,0xE0,0x01,0xF0,0x0F,0xC0,0x07,0xE0,0x3F,0xB0,0x0F,0xC0,0x7E,0x78,0x3F,0x00,
0x3C,0x3C,0xFE,0x00,0x00,0x1F,0xF8,0x00,0x00,0x1F,0xE0,0x00,0x00,0x7F,0xFC,0x00,
0x03,0xFE,0xF8,0x00,0x1F,0xFB,0xFF,0xFE,0xFF,0xC7,0xFF,0xFE,0x7F,0x1F,0xFF,0xFE,
0x30,0x3F,0x00,0x7C,0x00,0xFE,0x00,0xF8,0x03,0xF8,0x01,0xF0,0x0F,0xF7,0x07,0xE0,
0x3F,0xCF,0x8F,0xC0,0x1F,0x07,0xFF,0x80,0x0C,0x03,0xFE,0x00,0x00,0x03,0xFC,0x00,
0x00,0x1F,0xF0,0x00,0x00,0xFF,0xC0,0x00,0x1F,0xFF,0x00,0x00,0x7F,0xF8,0x00,0x00,
0x3F,0xC0,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  云  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"云",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x1F,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x00,0x1F,0x00,0x00,0x00,0x3E,0x00,0x00,0x00,0x3C,0x0C,0x00,
0x00,0x7C,0x1C,0x00,0x00,0xF8,0x1E,0x00,0x01,0xF0,0x1F,0x00,0x01,0xE0,0x0F,0x80,
0x03,0xE0,0x07,0xC0,0x07,0xC0,0x03,0xE0,0x0F,0x80,0x01,0xF0,0x3F,0xFF,0xFF,0xF0,
0x3F,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xFC,0x1E,0x00,0x00,0x3E,0x00,0x00,0x00,0x3C,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  阴  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"阴",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x7F,0xFB,0xFF,0xFC,0x7F,0xFB,0xFF,0xFC,0x7F,0xF3,0xFF,0xFC,0x78,0xF3,0xC0,0x3C,
0x78,0xF3,0xC0,0x3C,0x79,0xE3,0xC0,0x3C,0x79,0xE3,0xC0,0x3C,0x79,0xE3,0xC0,0x3C,
0x79,0xC3,0xFF,0xFC,0x7B,0xC3,0xFF,0xFC,0x7B,0xC3,0xFF,0xFC,0x7B,0xC3,0xC0,0x3C,
0x79,0xE3,0xC0,0x3C,0x79,0xF3,0xC0,0x3C,0x78,0xF7,0x80,0x3C,0x78,0xF7,0x80,0x3C,
0x78,0x7F,0xFF,0xFC,0x78,0x7F,0xFF,0xFC,0x78,0x7F,0xFF,0xFC,0x78,0x7F,0x80,0x3C,
0x78,0xFF,0x80,0x3C,0x7F,0xFF,0x80,0x3C,0x7F,0xEF,0x00,0x3C,0x7F,0xCF,0x00,0x3C,
0x78,0x1F,0x00,0x3C,0x78,0x1E,0x00,0x3C,0x78,0x3E,0x0F,0xFC,0x78,0x7C,0x0F,0xFC,
0x78,0x38,0x0F,0xF8,0x38,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  转  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"转",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x0F,0x00,0x07,0x80,0x0F,0x00,
0x07,0x80,0x1E,0x00,0x07,0x80,0x1E,0x00,0x0F,0x00,0x1E,0x00,0xFF,0xFF,0xFF,0xFE,
0xFF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFE,0x1E,0x00,0x3C,0x00,0x1F,0xE0,0x3C,0x00,
0x3D,0xE0,0x38,0x00,0x3D,0xE7,0xFF,0xFF,0x3D,0xE7,0xFF,0xFF,0x79,0xE7,0xFF,0xFF,
0x79,0xE0,0xF0,0x00,0xFF,0xFE,0xF0,0x00,0xFF,0xFE,0xF0,0x00,0xFF,0xFE,0xFF,0xFC,
0x01,0xE1,0xFF,0xFE,0x01,0xE1,0xFF,0xFE,0x01,0xE0,0x00,0x3C,0x01,0xFE,0x00,0x78,
0x3F,0xFE,0xE0,0xF8,0xFF,0xFF,0xF1,0xF0,0xFF,0xE1,0xFF,0xE0,0xE1,0xE0,0x7F,0xC0,
0x01,0xE0,0x3F,0x80,0x01,0xE0,0x0F,0xC0,0x01,0xE0,0x07,0xF0,0x01,0xE0,0x01,0xF0,
0x01,0xE0,0x00,0xF0,0x01,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  霜  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"霜",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xFC,
0x3F,0xFF,0xFF,0xFC,0x1F,0xFF,0xFF,0xF8,0x00,0x03,0xC0,0x00,0x7F,0xFF,0xFF,0xFE,
0x7F,0xFF,0xFF,0xFE,0x78,0x03,0xC0,0x1E,0x7F,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFE,
0x7F,0xFB,0xDF,0xFE,0x07,0xFB,0xDF,0xE0,0x07,0xFF,0xFF,0xE0,0x07,0xFF,0xFF,0xE0,
0x07,0x80,0x00,0x00,0x07,0x87,0xFF,0xFC,0x07,0x87,0xFF,0xFC,0x7F,0xFF,0xFF,0xFC,
0x7F,0xFF,0x80,0x3C,0x07,0x87,0xFF,0xFC,0x0F,0x87,0xFF,0xFC,0x0F,0xE7,0xFF,0xFC,
0x1F,0xF7,0x80,0x3C,0x3F,0xFF,0xFF,0xFC,0x7F,0xFF,0xFF,0xFC,0xFF,0xBF,0xFF,0xFC,
0xF7,0x87,0x80,0x3C,0xE7,0x87,0x80,0x3C,0x47,0x87,0xFF,0xFC,0x07,0x87,0xFF,0xFC,
0x07,0x87,0x80,0x3C,0x03,0x03,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  冻  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"冻",0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x00,0x00,0x01,0xF0,0x00,
0x70,0x01,0xE0,0x00,0x78,0x03,0xE0,0x00,0x7C,0xFF,0xFF,0xFE,0x3E,0xFF,0xFF,0xFE,
0x1E,0xFF,0xFF,0xFE,0x1F,0x07,0x80,0x00,0x0F,0x8F,0x00,0x00,0x0F,0x0F,0x1C,0x00,
0x00,0x1F,0x1E,0x00,0x00,0x1E,0x1E,0x00,0x00,0x3E,0x1E,0x00,0x00,0x3C,0x1E,0x00,
0x00,0x7C,0x1E,0x00,0x07,0x7F,0xFF,0xFF,0x0F,0xFF,0xFF,0xFF,0x0F,0x3F,0xFF,0xFE,
0x0F,0x00,0x1E,0x00,0x1F,0x06,0x1E,0x60,0x1E,0x0F,0x1F,0xF0,0x1E,0x1F,0x1E,0xF0,
0x3E,0x1E,0x1E,0x78,0x3C,0x3E,0x1E,0x7C,0x3C,0x3C,0x1E,0x3C,0x7C,0x78,0x1E,0x3E,
0x78,0xF8,0x1E,0x1F,0x79,0xF0,0x3E,0x0F,0xF9,0xE7,0xFE,0x0F,0x70,0xE3,0xFC,0x06,
0x00,0x03,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  雾  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"雾",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xFF,0xFF,0xF0,
0x1F,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xF8,0x00,0x03,0xC0,0x00,0x7F,0xFF,0xFF,0xFE,
0x7F,0xFF,0xFF,0xFE,0x78,0x03,0xC0,0x1E,0x7F,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFE,
0x78,0x03,0xC0,0x1E,0x37,0xFF,0xFF,0xEC,0x07,0xFF,0xFF,0xE0,0x00,0xF3,0xC0,0x00,
0x01,0xFF,0xFF,0xF0,0x07,0xFF,0xFF,0xF0,0x1F,0xFF,0xFF,0xF0,0x7F,0xF8,0x1F,0xC0,
0x7C,0x7F,0xFF,0x00,0x30,0x3F,0xFC,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xFE,0x1F,0xFF,
0x7F,0x0F,0x00,0x3E,0x0F,0xFF,0xFF,0xF0,0x0F,0xFF,0xFF,0xF0,0x0F,0xFF,0xFF,0xF0,
0x00,0x3C,0x00,0xE0,0x00,0xFC,0x00,0xE0,0x0F,0xF9,0xFF,0xE0,0x7F,0xE1,0xFF,0xC0,
0x3F,0x01,0xFF,0x80,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  雷  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"雷",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xF8,
0x1F,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xF8,0x00,0x03,0xC0,0x00,0x7F,0xFF,0xFF,0xFE,
0x7F,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFE,0x78,0x03,0xC0,0x1E,0x7F,0xFF,0xFF,0xFE,
0x7F,0xFF,0xFF,0xFE,0x77,0xFF,0xFF,0xFE,0x00,0x03,0xC0,0x00,0x07,0xFF,0xFF,0xE0,
0x07,0xFF,0xFF,0xE0,0x07,0xFB,0xDF,0xE0,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xF8,
0x1F,0xFF,0xFF,0xF8,0x1E,0x03,0xC0,0x78,0x1E,0x03,0xC0,0x78,0x1E,0x03,0xC0,0x78,
0x1F,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xF8,0x1E,0x03,0xC0,0x78,
0x1E,0x03,0xC0,0x78,0x1F,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xF8,
0x1E,0x00,0x00,0x78,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  阵  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"阵",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x00,0x00,0x7C,0x00,
0x7F,0xF0,0x78,0x00,0x7F,0xF0,0x78,0x00,0x7F,0xFF,0xFF,0xFF,0x79,0xFF,0xFF,0xFF,
0x79,0xFF,0xFF,0xFF,0x79,0xE1,0xE0,0x00,0x79,0xE1,0xE7,0x00,0x7B,0xC3,0xEF,0x80,
0x7B,0xC3,0xCF,0x80,0x7B,0xC3,0xCF,0x80,0x7F,0x87,0x8F,0x80,0x7F,0x87,0x8F,0x80,
0x7B,0xCF,0xFF,0xFC,0x7B,0xCF,0xFF,0xFE,0x79,0xEF,0xFF,0xFE,0x79,0xE0,0x0F,0x80,
0x78,0xF0,0x0F,0x80,0x78,0xF0,0x0F,0x80,0x78,0xF0,0x0F,0x80,0x78,0xFF,0xFF,0xFF,
0x78,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFF,0x7F,0xE0,0x0F,0x80,0x7F,0xE0,0x0F,0x80,
0x7F,0x00,0x0F,0x80,0x78,0x00,0x0F,0x80,0x78,0x00,0x0F,0x80,0x78,0x00,0x0F,0x80,
0x78,0x00,0x0F,0x80,0x30,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  风  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"风",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x1F,0xFF,0xFF,0xE0,0x1F,0xFF,0xFF,0xE0,0x1F,0xFF,0xFF,0xE0,0x1E,0x00,0x01,0xE0,
0x1E,0x00,0x19,0xE0,0x1E,0xE0,0x3D,0xE0,0x1F,0xF0,0x3D,0xE0,0x1E,0xF8,0x79,0xE0,
0x1E,0x78,0x79,0xE0,0x1E,0x7C,0xF1,0xE0,0x1E,0x3E,0xF1,0xE0,0x1E,0x1F,0xE1,0xE0,
0x1E,0x0F,0xE1,0xE0,0x1E,0x0F,0xC1,0xE0,0x1E,0x07,0xC1,0xE0,0x1E,0x0F,0xC1,0xE0,
0x1E,0x0F,0xE1,0xE0,0x1E,0x1F,0xF1,0xE0,0x3E,0x3E,0xF1,0xE0,0x3C,0x3C,0xF9,0xE4,
0x3C,0x78,0x7D,0xEF,0x3C,0xF8,0x3D,0xEF,0x3D,0xF0,0x3E,0xFF,0x7D,0xE0,0x1F,0xFF,
0x7B,0xC0,0x0E,0xFF,0x79,0xC0,0x00,0xFF,0xF8,0x00,0x00,0xFF,0xF0,0x00,0x00,0x7E,
0x60,0x00,0x00,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  电  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"电",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,
0x00,0x07,0x80,0x00,0x00,0x07,0x80,0x00,0x7F,0xFF,0xFF,0xF0,0x7F,0xFF,0xFF,0xF0,
0x7F,0xFF,0xFF,0xF0,0x78,0x07,0x80,0xF0,0x78,0x07,0x80,0xF0,0x78,0x07,0x80,0xF0,
0x78,0x07,0x80,0xF0,0x78,0x07,0x80,0xF0,0x7F,0xFF,0xFF,0xF0,0x7F,0xFF,0xFF,0xF0,
0x7F,0xFF,0xFF,0xF0,0x78,0x07,0x80,0xF0,0x78,0x07,0x80,0xF0,0x78,0x07,0x80,0xF0,
0x78,0x07,0x80,0xF0,0x7F,0xFF,0xFF,0xF0,0x7F,0xFF,0xFF,0xF0,0x7F,0xFF,0xFF,0xF0,
0x78,0x07,0x80,0x0F,0x78,0x07,0x80,0x0F,0x38,0x07,0x80,0x0F,0x00,0x07,0x80,0x0F,
0x00,0x07,0x80,0x1E,0x00,0x07,0xFF,0xFE,0x00,0x03,0xFF,0xFE,0x00,0x03,0xFF,0xFC,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  东  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"东",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x00,0x00,0x78,0x00,0x00,
0x00,0xF8,0x00,0x00,0x00,0xF0,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x03,0xC0,0x00,0x00,0x03,0xC1,0xE0,0x00,0x07,0xC1,0xE0,0x00,
0x07,0x81,0xE0,0x00,0x0F,0x81,0xE0,0x00,0x0F,0x01,0xE0,0x00,0x0F,0x01,0xE0,0x00,
0x1E,0x01,0xE0,0x00,0x1F,0xFF,0xFF,0xFC,0x1F,0xFF,0xFF,0xFC,0x1F,0xFF,0xFF,0xFC,
0x00,0x01,0xE0,0x00,0x01,0x81,0xE0,0x00,0x03,0xC1,0xE3,0x80,0x03,0xE1,0xE7,0xC0,
0x07,0xC1,0xE3,0xE0,0x0F,0x81,0xE1,0xF0,0x1F,0x01,0xE0,0xFC,0x3E,0x01,0xE0,0x7E,
0x7C,0x01,0xE0,0x3F,0xF8,0x03,0xE0,0x1F,0xF0,0x7F,0xE0,0x0E,0x60,0x7F,0xC0,0x00,
0x00,0x7F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},


/*--  文字:  南  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"南",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x80,0x00,0x00,0x03,0xC0,0x00,
0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x00,0x03,0xC0,0x00,0x00,0x03,0xC0,0x00,0x3F,0xFF,0xFF,0xFC,
0x3F,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFC,0x3C,0x38,0x1C,0x3C,0x3C,0x78,0x1E,0x3C,
0x3C,0x3C,0x3E,0x3C,0x3C,0x3E,0x3C,0x3C,0x3C,0x1C,0x78,0x3C,0x3D,0xFF,0xFF,0xBC,
0x3D,0xFF,0xFF,0xBC,0x3C,0x03,0xC0,0x3C,0x3C,0x03,0xC0,0x3C,0x3C,0x03,0xC0,0x3C,
0x3F,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFC,0x3C,0x03,0xC0,0x3C,
0x3C,0x03,0xC0,0x3C,0x3C,0x03,0xC0,0x3C,0x3C,0x03,0xDF,0xFC,0x3C,0x03,0xCF,0xFC,
0x3C,0x03,0xCF,0xF8,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  西  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"西",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x1E,0x3C,0x00,
0x00,0x1E,0x3C,0x00,0x00,0x1E,0x3C,0x00,0x00,0x1E,0x3C,0x00,0x3F,0xFF,0xFF,0xFE,
0x3F,0xFF,0xFF,0xFE,0x3F,0xFF,0xFF,0xFE,0x3C,0x3C,0x3C,0x1E,0x3C,0x3C,0x3C,0x1E,
0x3C,0x3C,0x3C,0x1E,0x3C,0x3C,0x3C,0x1E,0x3C,0x78,0x3C,0x1E,0x3C,0x78,0x3C,0x1E,
0x3C,0xF8,0x3C,0x1E,0x3D,0xF0,0x3F,0xFE,0x3F,0xE0,0x1F,0xFE,0x3F,0xC0,0x1F,0xFE,
0x3F,0x80,0x00,0x1E,0x3C,0x00,0x00,0x1E,0x3C,0x00,0x00,0x1E,0x3C,0x00,0x00,0x1E,
0x3C,0x00,0x00,0x1E,0x3F,0xFF,0xFF,0xFE,0x3F,0xFF,0xFF,0xFE,0x3F,0xFF,0xFF,0xFE,
0x3C,0x00,0x00,0x1E,0x18,0x00,0x00,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  北  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"北",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x18,0x00,0x00,0x78,0x3C,0x00,
0x00,0x78,0x3C,0x00,0x00,0x78,0x3C,0x00,0x00,0x78,0x3C,0x00,0x00,0x78,0x3C,0x00,
0x00,0x78,0x3C,0x0C,0x00,0x78,0x3C,0x1E,0x00,0x78,0x3C,0x7E,0xFF,0xF8,0x3C,0xFE,
0xFF,0xF8,0x3F,0xF8,0xFF,0xF8,0x3F,0xE0,0x00,0x78,0x3F,0x80,0x00,0x78,0x3E,0x00,
0x00,0x78,0x3C,0x00,0x00,0x78,0x3C,0x00,0x00,0x78,0x3C,0x00,0x00,0x78,0x3C,0x00,
0x00,0x78,0x3C,0x00,0x00,0x78,0x3C,0x00,0x00,0x78,0x3C,0x0E,0x00,0x78,0x3C,0x0F,
0x01,0xF8,0x3C,0x0F,0x0F,0xF8,0x3C,0x0F,0x3F,0xF8,0x3C,0x0F,0xFF,0xF8,0x3C,0x0F,
0xFC,0x78,0x3C,0x1F,0xF0,0x78,0x3F,0xFE,0x00,0x78,0x1F,0xFE,0x00,0x78,0x0F,0xFC,
0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  霾  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"霾",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xFF,0xFF,0xF0,
0x1F,0xFF,0xFF,0xF8,0x1F,0xFF,0xFF,0xF8,0x3F,0xFF,0xFF,0xFC,0x7F,0xFF,0xFF,0xFE,
0x7F,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFE,0x7F,0xFF,0xFF,0xFE,
0x37,0xFF,0xFF,0xEC,0x07,0xFF,0xFF,0xE0,0x00,0x30,0x00,0x00,0x03,0xFB,0xFF,0xFC,
0x7F,0xF3,0xFF,0xFC,0x7F,0xC3,0xCF,0x1C,0x7D,0xFF,0xCF,0x1C,0x1E,0xFF,0xFF,0xFC,
0x0F,0xFB,0xFF,0xFC,0x7F,0xE3,0xCF,0x1C,0x7F,0xF3,0xFF,0xFC,0x73,0xF3,0xFF,0xFC,
0x0F,0xFB,0xFF,0xFC,0x7F,0x79,0x8F,0x0C,0x7C,0xFB,0xFF,0xFE,0x73,0xFB,0xFF,0xFE,
0x0F,0xFB,0xFF,0xFE,0x7F,0x38,0x0F,0x00,0x7F,0xFF,0xFF,0xFF,0x77,0xFF,0xFF,0xFF,
0x07,0xF7,0xFF,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  向  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"向",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x00,0x00,0x0F,0x80,0x00,
0x00,0x0F,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x1F,0x00,0x00,0x3F,0xFF,0xFF,0xFC,
0x3F,0xFF,0xFF,0xFC,0x3F,0xFF,0xFF,0xFC,0x3C,0x00,0x00,0x3C,0x3C,0x00,0x00,0x3C,
0x3C,0x00,0x00,0x3C,0x3C,0x00,0x00,0x3C,0x3C,0x7F,0xFE,0x3C,0x3C,0x7F,0xFE,0x3C,
0x3C,0x7F,0xFE,0x3C,0x3C,0x78,0x1E,0x3C,0x3C,0x78,0x1E,0x3C,0x3C,0x78,0x1E,0x3C,
0x3C,0x78,0x1E,0x3C,0x3C,0x78,0x1E,0x3C,0x3C,0x7F,0xFE,0x3C,0x3C,0x7F,0xFE,0x3C,
0x3C,0x7F,0xFE,0x3C,0x3C,0x78,0x00,0x3C,0x3C,0x78,0x00,0x3C,0x3C,0x70,0x00,0x3C,
0x3C,0x00,0x00,0x3C,0x3C,0x00,0x00,0x3C,0x3C,0x00,0x0F,0xFC,0x3C,0x00,0x0F,0xF8,
0x3C,0x00,0x0F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  级  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"级",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x07,0xC0,0x00,0x00,
0x07,0x9F,0xFF,0xF0,0x0F,0x1F,0xFF,0xF0,0x0F,0x1F,0xFF,0xF0,0x1E,0x07,0x81,0xE0,
0x1E,0x77,0x81,0xE0,0x3C,0xF7,0x83,0xC0,0x78,0xF7,0x83,0xC0,0x79,0xE7,0xC7,0x80,
0xFF,0xC7,0xC7,0x80,0xFF,0xC7,0xC7,0xFC,0x67,0x87,0xE7,0xFC,0x0F,0x07,0xE7,0xFC,
0x0F,0x07,0xE0,0x7C,0x1E,0x07,0xF0,0x78,0x3C,0x27,0xF0,0x78,0x7F,0xF7,0xF8,0xF0,
0x7F,0xF7,0xF8,0xF0,0x7F,0x8F,0x3D,0xE0,0x00,0x0F,0x3F,0xE0,0x00,0x0F,0x1F,0xC0,
0x00,0xEF,0x0F,0x80,0x0F,0xFE,0x0F,0x80,0xFF,0xFE,0x1F,0xE0,0xFF,0x3C,0x3F,0xF0,
0xF8,0x7C,0xFD,0xF8,0x00,0x79,0xF8,0xFE,0x00,0xFF,0xF0,0x7F,0x01,0xF7,0xE0,0x1E,
0x00,0x63,0x80,0x0E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00
},

/*--  文字:  上  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"上",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x80,0x00,
0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,
0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,
0x00,0x0F,0xFF,0xFC,0x00,0x0F,0xFF,0xFC,0x00,0x0F,0xFF,0xFC,0x00,0x0F,0x80,0x00,
0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,
0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,
0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,0x00,0x0F,0x80,0x00,
0x7F,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0xFE,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  海  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"海",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x80,0x00,0x38,0x0F,0x00,0x00,
0x7C,0x0F,0x00,0x00,0x3E,0x1F,0xFF,0xFF,0x1F,0xBF,0xFF,0xFF,0x0F,0xBF,0xFF,0xFF,
0x07,0x78,0x00,0x00,0x00,0xF8,0x00,0x00,0x01,0xFF,0xFF,0xF8,0x71,0xFF,0xFF,0xF8,
0xF8,0xDF,0xFF,0xF8,0xFC,0x3C,0x70,0x78,0x3F,0x3C,0xF8,0x78,0x1F,0x3C,0x3E,0x78,
0x0E,0x3C,0x1C,0x78,0x00,0x3C,0x08,0x78,0x01,0xFF,0xFF,0xFF,0x01,0xFF,0xFF,0xFF,
0x0D,0xFF,0xFF,0xFF,0x0F,0x78,0xF0,0x78,0x1F,0x78,0xF8,0x78,0x1E,0x78,0x7C,0x78,
0x1E,0x78,0x3C,0x78,0x1E,0x78,0x18,0x78,0x3E,0x7F,0xFF,0xFE,0x3C,0x7F,0xFF,0xFE,
0x3C,0x7F,0xFF,0xFE,0x3C,0x00,0x00,0xF0,0x7C,0x00,0x7F,0xF0,0x78,0x00,0x3F,0xE0,
0x78,0x00,0x3F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00
},

/*--  文字:  持  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"持",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x1E,0x00,0x0F,0x00,0x1E,0x00,
0x0F,0x00,0x1E,0x00,0x0F,0x00,0x1E,0x00,0x0F,0x07,0xFF,0xFC,0x0F,0x0F,0xFF,0xFC,
0xFF,0xFF,0xFF,0xFC,0xFF,0xF7,0xFF,0xFC,0xFF,0xF0,0x1E,0x00,0x0F,0x00,0x1E,0x00,
0x0F,0x00,0x1E,0x00,0x0F,0x3F,0xFF,0xFF,0x0F,0x3F,0xFF,0xFF,0x0F,0x3F,0xFF,0xFF,
0x0F,0x60,0x00,0xE0,0x0F,0xE0,0x01,0xE0,0x7F,0xF0,0x01,0xE0,0xFF,0xC0,0x01,0xE0,
0xFF,0x3F,0xFF,0xFF,0xEF,0x3F,0xFF,0xFF,0x0F,0x1F,0xFF,0xFE,0x0F,0x07,0x01,0xE0,
0x0F,0x07,0x81,0xE0,0x0F,0x07,0xC1,0xE0,0x0F,0x03,0xE1,0xE0,0x0F,0x01,0xE1,0xE0,
0x0F,0x00,0xC1,0xE0,0x0F,0x00,0x01,0xE0,0xFF,0x00,0x3F,0xE0,0xFF,0x00,0x3F,0xE0,
0xFE,0x00,0x3F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  续  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"续",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x1E,0x00,0x07,0x80,0x1E,0x00,
0x0F,0x00,0x1E,0x00,0x0F,0x0F,0xFF,0xFC,0x1E,0x0F,0xFF,0xFC,0x1E,0x0F,0xFF,0xFC,
0x3C,0xE0,0x1E,0x00,0x3C,0xF0,0x1E,0x00,0x79,0xE0,0x1E,0x00,0x71,0xFF,0xFF,0xFF,
0xFF,0xDF,0xFF,0xFF,0xFF,0xDF,0xFF,0xFF,0xFF,0x83,0x87,0x1E,0x0F,0x07,0xC7,0x3E,
0x0F,0x03,0xFF,0x3C,0x1E,0x01,0xFF,0x38,0x3C,0x0E,0x7F,0x00,0x3C,0x1F,0x8F,0x00,
0x7F,0xEF,0xCF,0x00,0xFF,0xE3,0xCF,0x00,0x7F,0xC1,0x8F,0x00,0x00,0x3F,0xFF,0xFF,
0x00,0x3F,0xFF,0xFF,0x00,0x1F,0xFF,0xFF,0x01,0xE0,0x3F,0xC0,0x3F,0xE0,0x7F,0xE0,
0xFF,0xE0,0xF9,0xF0,0xFF,0x03,0xF0,0xFC,0x60,0x1F,0xE0,0x7E,0x00,0x7F,0xC0,0x1F,
0x00,0x3F,0x00,0x0E,0x00,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  湿  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"湿",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x00,0x00,0x00,
0x7C,0x3F,0xFF,0xFC,0x3E,0x3F,0xFF,0xFC,0x1F,0x3C,0x00,0x3C,0x0F,0xBC,0x00,0x3C,
0x07,0x3C,0x00,0x3C,0x02,0x3F,0xFF,0xFC,0x00,0x3F,0xFF,0xFC,0x70,0x3F,0xFF,0xFC,
0xF8,0x3C,0x00,0x3C,0x7C,0x3C,0x00,0x3C,0x3F,0x3F,0xFF,0xFC,0x1F,0x3F,0xFF,0xFC,
0x0E,0x3F,0xFF,0xFC,0x00,0x3D,0xC3,0x3C,0x00,0x01,0xC7,0x80,0x00,0x71,0xC7,0x8E,
0x1E,0xF1,0xC7,0x8F,0x1E,0x79,0xC7,0x9E,0x1E,0x79,0xC7,0xBE,0x1E,0x3D,0xC7,0xBC,
0x3E,0x3D,0xC7,0xF8,0x3C,0x3F,0xC7,0xF8,0x3C,0x1D,0xC7,0xF0,0x3C,0x01,0xC7,0xA0,
0x7C,0x01,0xC7,0x80,0x79,0xFF,0xFF,0xFF,0x79,0xFF,0xFF,0xFF,0x79,0xFF,0xFF,0xFF,
0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

/*--  文字:  度  --*/
/*--  微软雅黑24;  此字体下对应的点阵为：宽x高=32x41   --*/
{"度",
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xC0,0x00,0x00,0x01,0xE0,0x00,
0x00,0x01,0xF0,0x00,0x0F,0xFF,0xFF,0xFE,0x1F,0xFF,0xFF,0xFF,0x1F,0xFF,0xFF,0xFF,
0x1E,0x1C,0x03,0xC0,0x1E,0x1E,0x03,0xC0,0x1E,0x1E,0x03,0xC0,0x1F,0xFF,0xFF,0xFF,
0x1F,0xFF,0xFF,0xFF,0x1F,0xFF,0xFF,0xFE,0x1E,0x1E,0x03,0xC0,0x1E,0x1E,0x03,0xC0,
0x1E,0x1F,0xFF,0xC0,0x1E,0x1F,0xFF,0xC0,0x1E,0x1F,0xFF,0xC0,0x1E,0x1C,0x03,0xC0,
0x1E,0xFF,0xFF,0xE0,0x1F,0xFF,0xFF,0xF0,0x1F,0xFF,0xFF,0xF0,0x3C,0x3C,0x01,0xF0,
0x3C,0x1E,0x07,0xE0,0x3C,0x0F,0x8F,0x80,0x3C,0x07,0xFF,0x00,0x7C,0x03,0xFE,0x00,
0x78,0x03,0xFE,0x00,0x78,0x1F,0xFF,0xE0,0xF3,0xFF,0x9F,0xFF,0xFF,0xFE,0x03,0xFF,
0x67,0xF0,0x00,0x7E,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00},

};

cFONT Font24CN_Weather={
    Font24CN_Weather_Table,
    sizeof(Font24CN_Weather_Table)/sizeof(CH_CN),
    24, /* ASCII Width */
    32, /* Width */
    41, /* Height */
};