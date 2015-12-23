/*---------------------
 * Functional description:
 * Displaying the value detected by a light sensor in an LCD display (value 0-100)
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
 *Photo sensor resistor with one end in 5v, and the other in analog pin 1
 *10k ohm resistor with one end in GND and one end in analog pin 1 (acting as pull-down)
 */

#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);

void setup(void) {
  lcd.begin(16,2);
  lcd.clear();
}
 
void loop(void) {
  int photocellReading = analogRead(1);  
 
  lcd.clear();
  delay(10);

  lcd.print(map(photocellReading, 0, 1023, 0, 100));
 
  delay(500);
}

