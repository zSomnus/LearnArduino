void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 255; i++)
  {
    analogWrite(9, i);
    Serial.println(i);
    delay(10);
  }

  for (int i = 255; i > 0; i--)
  {
    analogWrite(9, i);
    Serial.println(i);
    delay(10);
  }
}
