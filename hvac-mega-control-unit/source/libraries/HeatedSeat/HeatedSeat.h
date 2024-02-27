#ifndef HEATEDSEAT_H
#define HEATEDSEAT_H

#include <Arduino.h>

class HeatedSeat {

    private:
        byte OutputPin;
        byte InputPin;
        byte NumTempLevels;
        boolean PWMControl;
        byte CurrentTempSetting;
        int MaxAnalogOut;
        int MaxAnalogRead;
        float Scalar;
        byte DesiredOutput;

    public:
        HeatedSeat(byte OutputPin, byte NumTempLevels, boolean PWMControl, byte InputPin);
        // OutputPin is Heated Seat Output (PWM)
        // NumTempLevels (BUTTONS ONLY) is how many temperature levels are desired.
        // PWMControl is if native PWM control from a rotary dial input is being used
        // InputPin is which pin should be used to read the rotary dial input from

        void init();
        // Setup the pins and set default state

        void poll();
        // Poll the input or calculate the DesiredOutput and set the output

        void increaseTemp();
        // Increase the temperature by 1 out of the NumTempLevels

        void decreaseTemp();
        // Decrease the temperature by 1 out of the NumTempLevels
}


#endif