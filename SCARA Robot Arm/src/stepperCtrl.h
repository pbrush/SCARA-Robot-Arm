#pragma once

#include <Arduino.h>
#include <definitions.h>

class stepperCtrl {
    int stepPin;
    int dirPin;
    float theta;

    public:
    //Constructor
    stepperCtrl(int sP, int dP){
        stepPin = sP;
        dirPin = dP;
        theta = 0;
    }
    void init();

    void setDeg(float deg);
    void setRad(float rad);
    float getTheta();            //either return the theta or print theta
    void testTurn();
    void step();

    private:
    
};