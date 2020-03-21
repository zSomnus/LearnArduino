
void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  for (int i = 3; i < 10; i++)
  {
    pinMode(i, OUTPUT);
  }
  randomSeed(analogRead(A0));
}
void loop() {
  int myNumber;
  if(!digitalRead(2)){
    myNumber = getRandomNumber(0, 9);
  }
  displayNumber(myNumber);
}

int getRandomNumber(int minNumber, int maxNumber){
  int randomNumber;
  for (int i = 0; i < 5; i++)
  {
    randomNumber = random(minNumber, maxNumber);  
    displayNumber(randomNumber);
    delay(100);
    displayClear();
    delay(100);
    Serial.print("i = ");
    Serial.println(i);
    Serial.print("randomNumber = ");
    Serial.println(randomNumber);
    Serial.println(" ");
  }
  
  return randomNumber;
}

void displayNumber(int ledNumber){
  switch (ledNumber)
  {
  case 0:
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    break;
  
  case 1:
    digitalWrite(4, HIGH);
    digitalWrite(7, HIGH);
    break;

  case 2:
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(8, HIGH);
    break;

  case 3:
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    break;

  case 4:
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(7, HIGH);
    break;

  case 5:
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    break;

  case 6:
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    break;

  case 7:
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(7, HIGH);
    break;

  case 8:
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    digitalWrite(9, HIGH);
    break;

  case 9:
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    break;

  default:
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(9, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
    break;
  }
}

void displayClear(){
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
}
