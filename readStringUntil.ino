void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  if(Serial.available()){
    String data = Serial.readStringUntil('\n');
    if(data == "on"){
      digitalWrite(13, HIGH);
      Serial.println(data);
      }
    else if(data == "off"){
      digitalWrite(13, LOW);
      Serial.println(data);
      }
    }
}
