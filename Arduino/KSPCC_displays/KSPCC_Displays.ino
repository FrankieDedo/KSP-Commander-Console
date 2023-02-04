
#include <LiquidCrystal.h>
#include "LedControl.h"

// initialize the library with the numbers of the interface pins
//LiquidCrystal lcd(RS, E, D4, D5, D6, D7);
LiquidCrystal lcd(20, 19, 18, 15, 14, 16);
LedControl L1 = LedControl(3, 10, 2, 1);
LedControl L2 = LedControl(5, 10, 4, 1);
LedControl L3 = LedControl(7, 10, 6, 1);
LedControl L4 = LedControl(9, 10, 8, 1);
KerbalSimpit mySimpit(Serial);
PrintCharArray ps;
/* we always wait a bit between updates of the display */
unsigned long delaytime = 10;
int intensity = 1;
char okmess;

void setup() {
  Serial.begin(115200);

  L1.shutdown(0, false);
  L1.setIntensity(0, intensity);
  L1.clearDisplay(0);

  L2.shutdown(0, false);
  L2.setIntensity(0, intensity);
  L2.clearDisplay(0);

  L3.shutdown(0, false);
  L3.setIntensity(0, intensity);
  L3.clearDisplay(0);

  L4.shutdown(0, false);
  L4.setIntensity(0, intensity);
  L4.clearDisplay(0);

  lcd.begin(16, 2);
  lcd.print("Hello World!");


}

void loop() {
  // put your main code here, to run repeatedly:
   digits();
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print(millis() / 1000);

}


void digits() {
  L1.setChar(0, 7, 'H', false);
  L1.setChar(0, 6, 'E', false);
  L1.setChar(0, 5, 'L', false);
  L1.setChar(0, 4, 'L', false);
  L1.setChar(0, 3, '0', false);
  L1.setChar(0, 2, '.', false);
  L1.setChar(0, 1, '.', false);
  L1.setChar(0, 0, '.', false);
  L2.setChar(0, 7, 'H', false);
  L2.setChar(0, 6, 'E', false);
  L2.setChar(0, 5, 'L', false);
  L2.setChar(0, 4, 'L', false);
  L2.setChar(0, 3, '0', false);
  L2.setChar(0, 2, '.', false);
  L2.setChar(0, 1, '.', false);
  L2.setChar(0, 0, '.', false);
  L3.setChar(0, 7, 'H', false);
  L3.setChar(0, 6, 'E', false);
  L3.setChar(0, 5, 'L', false);
  L3.setChar(0, 4, 'L', false);
  L3.setChar(0, 3, '0', false);
  L3.setChar(0, 2, '.', false);
  L3.setChar(0, 1, '.', false);
  L3.setChar(0, 0, '.', false);
  L4.setChar(0, 7, 'H', false);
  L4.setChar(0, 6, 'E', false);
  L4.setChar(0, 5, 'L', false);
  L4.setChar(0, 4, 'L', false);
  L4.setChar(0, 3, '0', false);
  L4.setChar(0, 2, '.', false);
  L4.setChar(0, 1, '.', false);
  L4.setChar(0, 0, '.', false);

  delay(delaytime + 1000);
  L1.clearDisplay(0);
  L2.clearDisplay(0);
  L3.clearDisplay(0);
  L4.clearDisplay(0);
  delay(delaytime);
  L1.setDigit(0, 7, 1, false);
  L2.setDigit(0, 7, 1, false);
  L3.setDigit(0, 7, 1, false);
  L4.setDigit(0, 7, 1, false);
  delay(delaytime);
  L1.setDigit(0, 6, 2, false);
  L2.setDigit(0, 6, 2, false);
  L3.setDigit(0, 6, 2, false);
  L4.setDigit(0, 6, 2, false);
  delay(delaytime);
  L1.setDigit(0, 5, 3, false);
  L2.setDigit(0, 5, 3, false);
  L3.setDigit(0, 5, 3, false);
  L4.setDigit(0, 5, 3, false);
  delay(delaytime);
  L1.setDigit(0, 4, 4, false);
  L2.setDigit(0, 4, 4, false);
  L3.setDigit(0, 4, 4, false);
  L4.setDigit(0, 4, 4, false);
  delay(delaytime);
  L1.setDigit(0, 3, 5, false);
  L2.setDigit(0, 3, 5, false);
  L3.setDigit(0, 3, 5, false);
  L4.setDigit(0, 3, 5, false);
  delay(delaytime);
  L1.setDigit(0, 2, 6, false);
  L2.setDigit(0, 2, 6, false);
  L3.setDigit(0, 2, 6, false);
  L4.setDigit(0, 2, 6, false);
  delay(delaytime);
  L1.setDigit(0, 1, 7, false);
  L2.setDigit(0, 1, 7, false);
  L3.setDigit(0, 1, 7, false);
  L4.setDigit(0, 1, 7, false);
  delay(delaytime);
  L1.setDigit(0, 0, 8, false);
  L2.setDigit(0, 0, 8, false);
  L3.setDigit(0, 0, 8, false);
  L4.setDigit(0, 0, 8, false);
  delay(1500);
  L1.clearDisplay(0);
  L2.clearDisplay(0);
  L3.clearDisplay(0);
  L4.clearDisplay(0);
  delay(delaytime);
}
