/*---------------------
 * Hardware setup:
 * 5v power source through USB
 * on/off click button with one end in GND and the other in pin 3
 * LED with negative end in GND and positive in pin 13
 * 
 * Functional description:
 * An on/off button that toggles an LED light
 */

const int ledPin = 13;
const int buttonPin = 3;
int lastButtonState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);

  // Turn on internal Pull-Up Resistor
  digitalWrite(buttonPin, HIGH);

  // Start serial communication, to allow logging
  Serial.begin(9600);

  lastButtonState = digitalRead(buttonPin);
}
 
void loop() {
  bool buttonState = digitalRead(buttonPin);  // store current state of pin 12

  if(buttonState != lastButtonState)
  {
      // We invert the state, because we're detecting grounding/pullup 5v voltage.
      digitalWrite(ledPin, !buttonState);
      Serial.println(!buttonState == 1? "on" : "off");
      lastButtonState = buttonState;
  }

  delay(100);
}

