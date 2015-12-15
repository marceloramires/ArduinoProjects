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

