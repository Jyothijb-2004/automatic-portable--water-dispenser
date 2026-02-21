const int buttonPin = 1;   
const int motorPin  = 9;   // MOSFET Gate
const int ledPin    = 8;   // LED indicator for hand place

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); 
  pinMode(motorPin, OUTPUT);
  pinMode(ledPin, OUTPUT);

  // Ensure everything is OFF at start
  digitalWrite(motorPin, LOW);
  digitalWrite(ledPin, LOW);
}

void loop() {
  int handDetected = digitalRead(buttonPin);

  // Button pressed = LOW (hand present)
  if (handDetected == LOW) {
    digitalWrite(motorPin, HIGH); 
    digitalWrite(ledPin, HIGH); 
    delay(10);
  } 
  else {
    digitalWrite(motorPin, LOW); 
    digitalWrite(ledPin, LOW);  
  }
}
