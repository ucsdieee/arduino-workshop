/* File: ButtonLED.ino
 * Turn on an LED by pressing a button
 * Author: Antony Nguyen & INSERT YOUR NAME HERE!
 */

const int buttonPin = 7;
const int ledPin = 9;
int buttonState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);
  if(buttonState == HIGH) {
    // Turn the LED on

  }
  else {
    // Turn the LED off

  }
}
