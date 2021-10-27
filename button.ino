int led = 6;
int button = 2;
int ledState = 0;
int buttonState = 0;
int preButtonState = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(button, INPUT_PULLUP);
}

void loop() {
  buttonState = digitalRead(button);
  if(preButtonState == LOW && buttonState == HIGH){
    if(ledState == 0){
      digitalWrite(led, HIGH);
      ledState = 1;
      }
    else{
      digitalWrite(led, LOW);
      ledState = 0;
      }
    }
  preButtonState = buttonState;
}
