#include "robot-config.h"

int channelUsing(){
    //Detect using channel and return the channel's number
    if (bool(Controller1.Axis1.value()))
        return 1;
    else if (bool(Controller1.Axis2.value()))
        return 2;
    else if (bool(Controller1.Axis3.value()))
        return 3;
    else if (bool(Controller1.Axis4.value()))
        return 4;
}


int getChannelValue(int channel){
    //Geturn the value of the using channel
    switch (channel){
    case 1:
        return Controller1.Axis1.value();
    case 2:
        return Controller1.Axis2.value();
    case 3:
        return Controller1.Axis3.value();
    case 4:
        return Controller1.Axis4.value();
    }
}


void motorController(int motorNumber,int motorSpeed){
    switch(motorNumber){
    case 1:
        Motor1.spin(directionType::fwd,motorSpeed,velocityUnits::rpm);
        //Brain.Screen.print("1");
        break;
    case 2:
        Motor2.spin(directionType::fwd,motorSpeed,velocityUnits::rpm);
        //Brain.Screen.print("2");
        break;
    }
}