#include <Arduino.h>
#include <definitions.h>
#include <stepperCtrl.h>

stepperCtrl step1(STEPX, DIRX);
stepperCtrl step2(STEPY, DIRY);
stepperCtrl step3(STEPZ, DIRZ);
//stepperCtrl step4(STEPA, DIRA);

void setup() {
  //Serial.begin(9600);
  step1.init();
  step2.init();
  step3.init();
  //step4.init();
  Serial.println("Setup...");
}

void loop() {
  //step1.testTurn();
  step1.setDeg(720);
  delay(1000);
  /*step2.setDeg(360);
  delay(1000);
  step3.setDeg(360);
  delay(1000);
  //step4.setDeg(360);
  delay(1000);*/
}