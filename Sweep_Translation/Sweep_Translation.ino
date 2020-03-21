#include <Servo.h>

Servo myServo;
int dataIndex = 0;

void setup() {
  myServo.attach(9);
  Serial.begin(9600);
  Serial.println("Please input serial data. ");
}

void loop() {
  if(Serial.available() > 0){
    dataIndex++;
    Serial.print("dataIndex = ");
    Serial.print(dataIndex);
    Serial.print(" , ");

    int pos = Serial.parseInt();
    Serial.print("Set servo position: ");
    Serial.println(pos);
    myServo.write(pos);
    delay(15);
  }
}
