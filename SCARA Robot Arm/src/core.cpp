#include <core.h>

bool core::readyForUpdate(){
    unsigned long time = millis();
    if (time > 5) {     //check this
        return true;
        time = 0;
    } else {
        return false;
    }
}