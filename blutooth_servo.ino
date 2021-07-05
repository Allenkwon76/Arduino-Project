#include <Servo.h>
#include <SoftwareSerial.h>

SoftwareSerial bluetooth(7, 8);
Servo myservo;

void setup(){
  myservo.attach(10);
  bluetooth.begin(9600);
  myservo.write(0);
}

void loop(){
  if (bluetooth.available()) {

     int a = bluetooth.read();
      if (a=='0') {myservo.write(0);
      delay(100);}
      if (a=='1') {myservo.write(60);
      delay(100);}
      if (a=='2') {myservo.write(120); 
      delay(100);}
      if (a=='3') {myservo.write(180);
      delay(100);}
  }
}
