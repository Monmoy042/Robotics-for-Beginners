const int buttonPin = 2;
const int ledPin =  4;
const int buzzPin = 3;


int buttonState = 0;

void setup() {

  pinMode(ledPin, OUTPUT);
  pinMode(buzzPin, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {

  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);
  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzPin, HIGH);
  }
  else {

    digitalWrite(ledPin, LOW);
    digitalWrite(buzzPin, LOW);
  }
}

