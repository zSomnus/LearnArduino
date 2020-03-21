#include <Servo.h>

Servo myservo;

bool push0;
bool push180;

void setup() {
  myservo.attach(9);
  pinMode(2, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  myservo.write(0);
}

void loop() {
  push0 = !digitalRead(4);
  push180 = !digitalRead(2);
  if(push180 && myservo.read() == 0){
    for(int i = 0; i <= 180; i++){
      myservo.write(i);
      delay(10);
    }
  }else if(push0 && myservo.read() == 180){
    for(int i = 180; i >= 0; i--){
      myservo.write(i);
      delay(10);
    }
  }
}
