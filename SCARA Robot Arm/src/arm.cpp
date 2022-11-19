#include <arm.h>

void arm::init(stepperCtrl s1, stepperCtrl s2, stepperCtrl s3, stepperCtrl s4) {
    xAxis = s1;
    yAxis = s2;
    zAxis = s3;
    yaw = s4;
    //set currPose
}

//Mathematically Inaccurate
bool arm::setX(float f) {
    xError = f-currPose.x;
    for (int i = 0; i < xError; i++) {
        xAxis.step();
    }
}

//Mathematically Inaccurate
bool arm::setY(float f) {
    yError = f-currPose.y;
    for (int i = 0; i < yError; i++) {
        yAxis.step();
    }
}

// Done
bool arm::setZ(float f) {
    zError = f-currPose.z;
    for (int i = 0; i < zError; i++) {
        zAxis.step();
    }
}

//Yaw and theta should be different
bool arm::setYaw(float f) {

    thetaError = f-currPose.theta;
    for (int i = 0; i < thetaError; i++) {
        yaw.step();
    }
}

void arm::updatePose() {
    if (/*core.readyForUpdate()*/true){
        
    }
}

//need to add getter functions for the pose components
//need to take differences in current pose and the final pose
//and then move the stepper accordingly