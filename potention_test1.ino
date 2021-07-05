void setup(){
  Serial.begin(9600);
}

void loop(){
  int readValue = analogRead(A0);
    Serial.println(readValue);
}