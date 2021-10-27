void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  if(Serial.available()){
    char data = Serial.read();
    if(data == '1'){
      digitalWrite(13, HIGH);
      Serial.println("LED ON");
      }
    else if(data == '2'){
      digitalWrite(13, LOW);
      Serial.println("LED OFF");
      }
    }
}
