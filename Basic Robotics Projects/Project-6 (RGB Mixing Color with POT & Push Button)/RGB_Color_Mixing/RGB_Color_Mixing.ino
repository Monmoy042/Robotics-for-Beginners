int redPin = 13;
int greenPin = 12;
int bluePin = 8;
int pot = A0;
int greenButton = 7;
int blueButton = 2;
char redVal, greenVal, blueVal;
void setup()

{

  pinMode(redPin, OUTPUT);

  pinMode(greenPin, OUTPUT);

  pinMode(bluePin, OUTPUT);

  pinMode(pot, INPUT_PULLUP);

  pinMode(greenButton, INPUT_PULLUP);

  pinMode(blueButton, INPUT_PULLUP);

  Serial.begin(9600);
}



void loop()

{
  int potValue = analogRead(pot);
  Serial.println(potValue);

  //Makes the potentiometer act as a switch by turning it on when potentiometer
  //reading is more than 500

  if (potValue < 500) {
    redVal = LOW;
  }
  else
  {
    redVal = HIGH;
  }

  if (digitalRead(greenButton) == HIGH) {
    greenVal = HIGH;
  }
  else
  {
    greenVal = LOW;
  }

  if (digitalRead(blueButton) == HIGH) {
    blueVal = HIGH;
  }
  else
  {
    blueVal = LOW;
  }

  setColour(redVal, greenVal, blueVal);



}


void setColour(char red, char green, char blue)

{

  digitalWrite(redPin, red);

  digitalWrite(greenPin, green);

  digitalWrite(bluePin, blue);

}
