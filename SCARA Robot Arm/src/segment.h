#pragma once
#include <stepperCtrl.h>
#include <pose2D.h>
#include <core.h>

class segment {
    core c;
    stepperCtrl actuator;
    pose2D basePose;
    pose2D endPose;
    float theta;
    float length; // in mm
    float e; //speed ratio

    public:
    void setTheta(float t);
    void updateTheta();
};