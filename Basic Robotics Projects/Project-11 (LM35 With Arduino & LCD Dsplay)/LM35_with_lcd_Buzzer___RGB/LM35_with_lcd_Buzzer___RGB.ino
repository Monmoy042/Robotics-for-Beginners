// LCD Dsplay with LM35 Temperature Sensor
#include <LiquidCrystal.h>
int val;
const int tempPin = A0;
int buzzPin = 7;
int red = 9;
int green = 10;
int blue = 11;
const int rs = 12, en = 11, d4 = 6, d5 = 5, d6 = 4, d7 = 3;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {

  pinMode(tempPin, INPUT);
  pinMode(buzzPin, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  lcd.begin(16, 2);
}

void loop() {
  val = analogRead(tempPin);
  float millivolts = (val / 1024.0) * 5000;
  float celsius = millivolts / 10;
  float fahrenheit = (celsius * 9) / 5 + 32;

  //lcd.print("Temperature= ");
  lcd.setCursor(0, 0);
  lcd.print(celsius);
  lcd.print("*C");
  lcd.setCursor(0, 1);
  lcd.print(fahrenheit);
  lcd.print("*F");
  delay(1000);

  if (celsius >= 20) {
    digitalWrite(green, HIGH);
  }
  if (celsius >= 27) {
    digitalWrite(blue, HIGH);
  }
  if (celsius >= 30) {
    digitalWrite(red, HIGH);
    digitalWrite(buzzPin, HIGH);
  }
  else {
    digitalWrite(buzzPin, LOW);
  }
}

