bool pushButton1;
bool pushButton2;
int ledPin = 9;
int brightness = 128;

void setup(){
    pinMode(2, INPUT_PULLUP);
    pinMode(8, INPUT_PULLUP);
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}
void loop(){

}