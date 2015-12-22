/*---------------------
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
 * Functional description:
 * Displaying text with some timing in an LCD display
 */

#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

void setup() {
  lcd.begin(16,2);
  lcd.clear();
}

void loop() {
  lcd.clear();
  lcd.print("printing text");
  delay(3000);

  lcd.clear();
  lcd.print("worked");
  delay(3000);
}
