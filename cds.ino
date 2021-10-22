int cds = A0;
int led = 3;
int cdsValue = analogRead(cds);

void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT);
}

void loop() {
  Serial.print("cds = ");
  Serial.println(cdsValue);

  if(cdsValue > 50){
    digitalWrite(led, HIGH);
    Serial.println("LED ON (cds > 50)");
    }
  else{
    digitalWrite(led, LOW);
    Serial.println("LED OFF (cds <50)");
    }
  delay(200);
}
