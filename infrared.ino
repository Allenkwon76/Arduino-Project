int infrared = 3;
int led = 6;

void setup() {
  pinMode(infrared, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int state = digitalRead(infrared);
  Serial.print("Infrared = ");
  Serial.println(state);

  if(state == 0){
    digitalWrite(led, HIGH);
    Serial.println("Warning");
    }
  else{
    digitalWrite(led, LOW);
    Serial.println("Safe");
    }
}
