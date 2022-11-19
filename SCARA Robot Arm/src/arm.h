#pragma once
#include <stepperCtrl.h>
#include <pose3D.h>
#include <core.h>
#include <segment.h>


class arm {
    pose3D currPose;
    pose3D finalDest;
    stepperCtrl xAxis;
    stepperCtrl yAxis;
    stepperCtrl zAxis;
    stepperCtrl yaw;
    segment shoulder;
    segment foreArm;

    public:
    void init(stepperCtrl s1, stepperCtrl s2, stepperCtrl s3, stepperCtrl s4);

    bool setZ(float f);
    bool setY(float f);
    bool setX(float f);
    bool setYaw(float f);
    bool setPose(pose3D nP);
    void updatePose();

    private:
    float xError;
    float yError;
    float zError;
    float thetaError;

};