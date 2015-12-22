/*---------------------
 * Hardware setup:
 * 5v power source through USB
 * LED with negative end in GND and positive in pin 13
 * 
 * Functional description:
 * A blinking LED light, that turns on for 2 seconds, blinks a bit, then repeats.
 */
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);

}

void loop() {
  TurnLedOn(2000);
  TurnLedOff(30);
  TurnLedOn(30);
  TurnLedOff(30);
  TurnLedOn(30);
  TurnLedOff(30);
  TurnLedOn(30);
  TurnLedOff(30);
}

void TurnLedOn(int milliseconds)
{
    digitalWrite(ledPin, HIGH);
    delay(milliseconds);
}

void TurnLedOff(int milliseconds)
{
    digitalWrite(ledPin, LOW);
    delay(milliseconds);
}

