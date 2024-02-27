#ifndef HEATED_SEAT_H
#define HEATED_SEAT_H

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

        void init();
        // Setup the pins and set default state

        void poll();
        // Poll the input and set the output (for PWM applications)

        void increaseTemp();
        // Increase the temperature

        void decreaseTemp();
        // Decrease the temperature

}


#endif