#include <stepperCtrl.h>

void stepperCtrl::init() {
        pinMode(stepPin, OUTPUT);
        pinMode(dirPin, OUTPUT);
}

void stepperCtrl::step() {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(500);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(500);
}

float stepperCtrl::getTheta() {
    Serial.println(theta);
    return theta;
}

void stepperCtrl::setDeg(float deg) {
    int t = deg/degPerTurn;
    Serial.println(t);
    for (int i = 0; i < t; i++) {
        step();
    }
}

void stepperCtrl::testTurn() {
    for (int i = 0; i < 200; i++) {
        step();
    }
    delay(1000);
}