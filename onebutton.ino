#include <OneButton.h>
#define buttonPin 7

OneButton button = OneButton(buttonPin, false);
static int state = LOW;

void setup() {
  Serial.begin(115200);
  button.attachClick(singleClick);
  button.attachDoubleClick(doubleClick);
  button.attachLongPressStop(longPress); //약3초 이상
}

void loop() {
  button.tick();
  delay(10);
}

void singleClick(){
  state = !state;
  Serial.println("One Click");
}

void doubleClick(){
  Serial.println("Double Click");
}

void longPress(){
  Serial.println("Long Press");
}
