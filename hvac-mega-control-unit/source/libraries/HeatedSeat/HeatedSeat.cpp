#include "HeatedSeat.h"

HeatedSeat::HeatedSeat(byte OutputPin, byte NumTempLevels, boolean PWMControl, byte InputPin) {
    this->OutputPin = OutputPin;
    this->InputPin = InputPin;
    this->NumTempLevels = NumTempLevels;
    this->PWMControl = PWMControl;
    init();
}

void HeatedSeat::init() {
    // Set Defaults
    pinMode(OutputPin, OUTPUT);
    currentTempSetting = 0;
     // AnalogRead has a range of 0-1023. Out is 0-255
    MaxAnalogRead = 1023;
    MaxAnalogOut = 255;
    Scalar = MaxAnalogRead / MaxAnalogOut;

}

void HeatedSeat::poll() {
    if(PWMControl) {
        DesiredOutput = analogRead(InputPin)/Scalar;
    } else {
        DesiredOutput = (CurrentTempSetting / NumTempLevels) * MaxAnalogOut;
    }
    analogWrite(OutputPin, DesiredOutput)
}

void HeatedSeat::increaseTemp() {
    if(!PWMControl) {
        if(currentTempSetting < NumTempLevels) {
            currentTempSetting+=1
        }
        poll();
    }
}

void HeatedSeat::decreaseTemp() {
    if(!PWMControl) {
        if(currentTempSetting < 0) {
            currentTempSetting-=1
        }
        poll();
    }
}