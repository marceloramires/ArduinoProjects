/*---------------------
 * Functional description:
 * Displaying the value in degrees celsius from a temperature sensor, and warning whether it surpasses a threshold by displaying "DANGER" and ringing a buzzer.
 * 
 * Hardware setup:
 * 5v power source through USB
 * on/off click button with one end in protoboar's 5V and protoboard's F1
 * Jumper between arduino's 5V and protoboard's J1
 * Jumper between arduino's GND and protoboard's GND
 * 16x2 LCD display with wiring as follows:
 *    1 - protoboard's GND
 *    2 - protoboard's 5V
 *    3 - 3 300ohm resistors in serial to GND (didn't have a 1k, but I improvised with those, and it worked)
 *    4 - arduino's pin 12
 *    5 - protoboard's GND
 *    6 - arduino's pin 11
 *    
 *    11 - arduino's pin 5
 *    12 - arduino's pin 4
 *    13 - arduino's pin 3
 *    14 - arduino's pin 2
 *    
 * LM35 temperature sensor on pin analog-in pin 0, 5v and GND
 * Buzzer on 5v and pin 9
 */

#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
  lcd.begin(16,2);
  lcd.clear();

  pinMode(9, OUTPUT);
}

void loop() {
  long miliVolts = (analogRead(0) * 5000L) /1023;
  long temp = miliVolts/10;

  lcd.clear();
  lcd.print(temp);

  if(temp > 25)
  {
      analogWrite(9, 150); 
      lcd.print(" - DANGER!");
  }
  else
  {
    analogWrite(9,0); 
  }
  
  delay(500);
}
