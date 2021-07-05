void setup() {
  
  tone (8, 262,500);
  delay(500);
  tone (8, 294,500);
  delay(500);
  tone (8, 329,500);
  delay(500);
  tone (8, 349,500);
  delay(500);
  tone (8, 392,500);
  delay(500);
  tone (8, 440,500);
  delay(500);
  tone (8, 493,500);
  delay(500);
  tone (8, 523,500);
  delay(500);
} 

void loop() {
  


}


/*
int PIN_PIEZO = 8;  // 피에조 스피커의 변수 선언

int melody[] = {  262,  // 도, 주파수: 262Hz
                  294,  // 레, 294Hz
                  330,  // 미, 330Hz
                  349,  // 파, 349Hz
                  392,  // 솔, 392Hz
                  440,  // 라, 440Hz
                  494,  // 시, 494Hz
                  523   // 도, 523Hz
};

void setup() {
  for (int i=0; i<8; i++) {           // for 반복문을 통해 melody 배열에 있는 주파수를 한번씩 호출
    tone(PIN_PIEZO, melody[i], 500);  // 7번 핀에 0.5초 동안 특정 주파수의 소리가 발생하도록 전압을 인가함
    delay(500);                      // 1초간 지연
  }
}

void loop() {
  
}

*/