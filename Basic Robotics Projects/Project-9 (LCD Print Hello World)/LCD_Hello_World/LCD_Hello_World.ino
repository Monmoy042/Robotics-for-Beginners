
// LCD Hello World Print
#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 6, d5 = 5, d6 = 4, d7 = 3;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); //Declare pinMode

void setup() {
  lcd.begin(16, 2); //Declare Dimention of the Display
}

void loop() {
  lcd.setCursor(0, 1); //Set the cursor at 1st column 1st row
  lcd.print("Hello, world!");
  lcd.print(millis() / 1000); // Count Seconds
}

