int potPin= A0;
int LEDPin= 9;
int potValue;
int colorLevel;
void setup() {
  pinMode(potPin, INPUT);
  pinMode(LEDPin, OUTPUT);
  Serial.begin(9600);
}
 
void loop() {
  
 potValue = analogRead(potPin);
 colorLevel = map(potValue,1,1024,1,255);
 analogWrite(LEDPin, colorLevel);
 Serial.print("The value of Resistance is: ");
 Serial.println(colorLevel);
}
