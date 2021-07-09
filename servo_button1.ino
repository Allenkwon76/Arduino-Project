#include <Servo.h>
 
Servo myservo;

int button = 12;
int angle = 0;
 

void setup() {
  myservo.attach(9);
  myservo.write(0);
  pinMode(button, INPUT_PULLUP);
}
 
void loop() {

  if (digitalRead(button) == LOW) {
    angle += 15;
    if (angle >= 180) {
      angle = 0;
    }
    myservo.write(angle);
    delay(500);
  }
}
