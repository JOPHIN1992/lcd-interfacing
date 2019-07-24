#include<htc.h>

#define RS RB2
#define EN RB3
#define D4 RB4
#define D5 RB5
#define D6 RB6
#define D7 RB7


#define _XTAL_FREQ 20000000
#include "lcd.h"



void main()
{
 int i;
  TRISB = 0x00;
  Lcd4_Init();
  while(1)
  {
    Lcd4_Set_Cursor(1,1);
    Lcd4_Write_String("Hello World");
    
    Lcd4_Clear();
    Lcd4_Set_Cursor(2,1);
    Lcd4_Write_Char('e');
    //Lcd4_Write_Char('S');
    __delay_ms(2000);
  }
}
