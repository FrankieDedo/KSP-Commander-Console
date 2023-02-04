
#include "MegaJoyKSPCC.h"

void setup() {
  setupPins();
  setupMegaJoy();
}

void loop() {
  // Always be getting fresh data
  megaJoyControllerData_t controllerData = getControllerData();
  setControllerData(controllerData);
}

void setupPins(void) {
  // Set all the digital pins as inputs
  // with the pull-up enabled, except for the
  // two serial line pins
  for (int i = 2; i <= 54; i++) {
    pinMode(i, INPUT_PULLUP);
    digitalWrite(i, HIGH);
  }
  pinMode(66, INPUT_PULLUP);
  digitalWrite(66, HIGH);
  
  pinMode(16, INPUT);
  pinMode(17, INPUT);
  pinMode(18, INPUT);
  pinMode(19, INPUT);
  pinMode(20, INPUT);
  digitalWrite(16, LOW);
  digitalWrite(17, LOW);
  digitalWrite(18, LOW);
  digitalWrite(19, LOW);
  digitalWrite(20, LOW);
}

megaJoyControllerData_t getControllerData(void) {

  // Set up a place for our controller data
  //  Use the getBlankDataForController() function, since
  //  just declaring a fresh dataForController_t tends
  //  to get you one filled with junk from other, random
  //  values that were in those memory locations before
  megaJoyControllerData_t controllerData = getBlankDataForMegaController();
  // Since our buttons are all held high and
  //  pulled low when pressed, we use the "!"
  //  operator to invert the readings from the pins

  //UP
  controllerData.buttonArray[0 / 8] |= digitalRead(16) << 0 % 8;
  controllerData.buttonArray[1 / 8] |= digitalRead(17) << 1 % 8;
  controllerData.buttonArray[2 / 8] |= digitalRead(18) << 2 % 8;
  controllerData.buttonArray[3 / 8] |= digitalRead(19) << 3 % 8;
  controllerData.buttonArray[4 / 8] |= digitalRead(14) << 4 % 8;

  //LEFT
  controllerData.buttonArray[5 / 8] |= !digitalRead(22) << 5 % 8;
  controllerData.buttonArray[13 / 8] |= !digitalRead(23) << 13 % 8 ;
  controllerData.buttonArray[6 / 8] |= !digitalRead(24) << 6 % 8 ;
  controllerData.buttonArray[14 / 8] |= !digitalRead(25) << 14 % 8 ;
  controllerData.buttonArray[7 / 8] |= !digitalRead(26) << 7 % 8 ;
  controllerData.buttonArray[19 / 8] |= !digitalRead(27) << 19 % 8 ;
  controllerData.buttonArray[8 / 8] |= !digitalRead(28) << 8 % 8 ;
  controllerData.buttonArray[18 / 8] |= !digitalRead(29) << 18 % 8 ;
  controllerData.buttonArray[9 / 8] |= !digitalRead(30) << 9 % 8 ;
  controllerData.buttonArray[17 / 8] |= !digitalRead(31) << 17 % 8 ;
  controllerData.buttonArray[10 / 8] |= !digitalRead(32) << 10 % 8 ;
  controllerData.buttonArray[16 / 8] |= !digitalRead(33) << 16 % 8 ;
  controllerData.buttonArray[11 / 8] |= !digitalRead(34) << 11 % 8 ;
  controllerData.buttonArray[15 / 8] |= !digitalRead(35) << 15 % 8 ;
  controllerData.buttonArray[12 / 8] |= !digitalRead(36) << 12 % 8 ;
  controllerData.buttonArray[45 / 8] |= !digitalRead(37) << 45 % 8 ;
  controllerData.buttonArray[44 / 8] |= !digitalRead(46) << 44 % 8 ;

  //CENTER
  controllerData.buttonArray[28 / 8] |= !digitalRead(51) << 29 % 8;
  controllerData.buttonArray[29 / 8] |= !digitalRead(53) << 30 % 8 ;

  //RIGHT
  controllerData.buttonArray[30 / 8] |= !digitalRead(47) << 30 % 8 ;
  controllerData.buttonArray[31 / 8] |= !digitalRead(5) << 31 % 8 ;
  controllerData.buttonArray[32 / 8] |= !digitalRead(39) << 32 % 8 ;
  controllerData.buttonArray[33 / 8] |= !digitalRead(49) << 33 % 8 ;
  controllerData.buttonArray[34 / 8] |= !digitalRead(43) << 34 % 8 ;
  controllerData.buttonArray[35 / 8] |= !digitalRead(45) << 35 % 8 ;
  controllerData.buttonArray[36 / 8] |= !digitalRead(41) << 36 % 8 ;
  controllerData.buttonArray[37 / 8] |= !digitalRead(6) << 37 % 8 ;
  controllerData.buttonArray[38 / 8] |= !digitalRead(2) << 38 % 8 ;
  controllerData.buttonArray[39 / 8] |= !digitalRead(3) << 39 % 8 ;
  controllerData.buttonArray[40 / 8] |= !digitalRead(4) << 40 % 8 ;
  controllerData.buttonArray[41 / 8] |= !digitalRead(7) << 41 % 8 ;
  controllerData.buttonArray[42 / 8] |= !digitalRead(9) << 42 % 8 ;
  controllerData.buttonArray[43 / 8] |= !digitalRead(8) << 43 % 8 ;

  //ABXY
  controllerData.buttonArray[27 / 8] |= !digitalRead(66) << 27 % 8 ;
  controllerData.buttonArray[24 / 8] |= !digitalRead(48) << 24 % 8 ;
  controllerData.buttonArray[25 / 8] |= !digitalRead(50) << 25 % 8 ;
  controllerData.buttonArray[26 / 8] |= !digitalRead(52) << 26 % 8 ;

  //DPAD
  controllerData.dpad0LeftOn = !digitalRead(44);
  controllerData.dpad0UpOn = !digitalRead(40);
  controllerData.dpad0RightOn = !digitalRead(38);
  controllerData.dpad0DownOn = !digitalRead(42);

  //LJOY
  controllerData.analogAxisArray[0] = -(analogRead(A0) - 1023);
  controllerData.analogAxisArray[1] = -(analogRead(A1) - 1023);
  controllerData.analogAxisArray[2] = analogRead(A2);

  //RJOY
  controllerData.analogAxisArray[3] = -(analogRead(A8) - 1023);
  controllerData.analogAxisArray[4] = -(analogRead(A9) - 1023);
  controllerData.analogAxisArray[5] = analogRead(A10);

  //SLIDER
  controllerData.analogAxisArray[6] = analogRead(A11);


  // And return the data!
  return controllerData;
}
