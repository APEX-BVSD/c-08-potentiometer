/**
 * Demonstrates how to use the potentiometer.
 * @author First Last
 * @date Month Year
 */

const int potPin = A0;
const int ledPin = 9;

void setup() {
    pinMode(ledPin, OUTPUT);
    Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(potPin);

  Serial.println(potValue);

  delay(100);
}
