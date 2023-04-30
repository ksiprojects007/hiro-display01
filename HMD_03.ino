//.......................................................................KEEP STARTING INNOVATIVELY.......................................................................
//                                                                     HIRO MINI DISPLAY TEST PROGRAM-03
//                                                                  @COPY RIGHT 2023, 30 APRIL, 12:00 IST
// ......................program begins...............//
#include "SPFD5408_Adafruit_GFX.h"    // CORE GRAPHICS LIB
#include "SPFD5408_Adafruit_TFTLCD.h" // SPECIFIC HARDWARE LIB
#include "SPFD5408_TouchScreen.h"


// PIN OUT FOR TFT 2.4 INCH TOUCH SCREEN
#define YP    A1
#define XM    A2
#define YM    7
#define XP    6

// CALIBRATED TOUCH SCREEN VALUES  FOR MY TFT
#define TS_MINX   931
#define TS_MINY   895
#define TS_MAXX   178
#define TS_MAXY   75// these values are for rotation(3) and start screen from this rotation//

// INITIALIZING TS 
TouchScreen ts = TouchScreen(XP, YP, XM, YM, 300);

#define LCD_RD    A0
#define LCD_WR    A1
#define LCD_CD    A2
#define LCD_CS    A3
#define LCD_RESET A4

// Instantiate the tft object
Adafruit_TFTLCD tft(LCD_CS, LCD_CD, LCD_WR, LCD_RD, LCD_RESET);

// COLOUR CODES FOR 16-BIT
#define  BLACK   0x0000
#define BLUE    0x001F
#define RED     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF

void setup(void) {
  Serial.begin(9600);
  Serial.println(F("Paint!"));
  
  tft.reset();
  tft.begin(0x9341);      // SPFD5408 compatible
  tft.setRotation(3);     // SPECIALY FOR MY TFT
                          // tft.setRotation(3);
  tft.fillScreen(BLACK);  //Set Background Color with BLACK
  delay(1000);
 /* tft.drawCircle(240,75, 58, WHITE); //x,y ,radius,colour
  delay(1000);
 // tft.fillRectcirle(50, 50, 100, 60, RED);
  tft.drawCircle(70, 75, 58, WHITE); //x,y,Radius,colour
  delay(1000);
  
  */
 
  tft.drawCircle(240,75, 58, WHITE); //x,y ,radius
  delay(650);
  
  tft.drawCircle(70, 75, 58, WHITE); //x,y,Radius
  delay(650);

  tft.fillRoundRect(100,183,110,30,27,WHITE); //x,y, width, height,radius,colour
  delay(680);
  /*
  tft.fillCircle(70, 75, 58, WHITE); //x,y,Radius,colour
  delay(1000);
  tft.fillCircle(240,75, 58, WHITE); //x,y ,radius,colour
  delay(1000);
  */ 
}

void loop() {
  
 /* tft.drawCircle(240,75, 58, WHITE); //x,y ,radius
  delay(650);
  
  tft.drawCircle(70, 75, 58, WHITE); //x,y,Radius
  delay(650);
  
*/  
  tft.fillCircle(70, 75, 58, WHITE); //x,y,Radius,colour
  delay(200);
  tft.fillCircle(240,75, 58, WHITE); //x,y ,radius,colour
  delay(200);
   tft.fillCircle(70, 75, 35, BLACK); //x,y,Radius,colour
  delay(200);
  tft.fillCircle(240,75, 35, BLACK); //x,y ,radius,colour
  delay(900);
   tft.fillRoundRect(115,185,80,25,20,BLACK); //x,y, width, height,radius,colour
  delay(1000);
 // tft.fillCircle(70, 75, 35, BLACK); //x,y,Radius,colour
  //delay(1500);
  }
