void setup(){
    Serial.begin(9600);
}

void loop(){
    int analogInputVal = analogRead(A0);

    Serial.println(analogInputVal);
}