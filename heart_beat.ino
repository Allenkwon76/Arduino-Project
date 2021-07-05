#include "LedControl.h"
LedControl lc = LedControl(12, 11, 10, 1);

byte heart[] =
{
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000,
  B00000000
};
byte heart1[] =
{
  B00000000,
  B00000000,
  B00000000,
  B00011000,
  B00011000,
  B00000000,
  B00000000,
  B00000000
};
byte heart2[] =
{
  B00000000,
  B00000000,
  B00111100,
  B00111100,
  B00111100,
  B00111100,
  B00000000,
  B00000000
};
byte heart3[] =
{
  B00000000,
  B00111100,
  B01111110,
  B01111110,
  B01111110,
  B01111110,
  B00111100,
  B00000000
};
byte heart4[] =
{
  B01100110,
  B11111111,
  B11111111,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000
};

void setup() {
  lc.shutdown(0, false);
  lc.setIntensity(0, 5);
  lc.clearDisplay(0);
}

void loop() {
  display_heart();
  delay(200);
  display_heart1();
  delay(200);
  display_heart2();
  delay(200);
  display_heart3();
  delay(200);
  display_heart4();
  delay(200);
}

void display_heart(){
    for (int i = 0; i < 8; i++){
      lc.setRow(0, i, heart[i]);
    }
}
void display_heart1(){
    for (int i = 0; i < 8; i++){
      lc.setRow(0, i, heart1[i]);
    }
}
void display_heart2(){
    for (int i = 0; i < 8; i++){
      lc.setRow(0, i, heart2[i]);
    }
}
void display_heart3(){
    for (int i = 0; i < 8; i++){
      lc.setRow(0, i, heart3[i]);
    }
}
void display_heart4(){
    for (int i = 0; i < 8; i++){
      lc.setRow(0, i, heart4[i]);
    }
}
