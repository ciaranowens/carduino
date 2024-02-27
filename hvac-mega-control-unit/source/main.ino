#include <HeatedSeat.h>

boolean PWMHeatedSeats = true;
byte FLHeatedSeatInputPin = 0;
byte FLHeatedSeatOutputPin = 0;
byte FRHeatedSeatInputPin = 0;
byte FRHeatedSeatOutputPin = 0;
byte HeatedSeatNumLevels = 255;


HeatedSeat FLHeatedSeat(FLHeatedSeatOutputPin, HeatedSeatNumLevels, PWMHeatedSeats, FLHeatedSeatInputPin);
HeatedSeat FRHeatedSeat(FRHeatedSeatOutputPin, HeatedSeatNumLevels, PWMHeatedSeats, FRHeatedSeatInputPin);

void setup () {
    FLHeatedSeat.init();
    FRHeatedSeat.init();
}

void loop() {
    FLHeatedSeat.poll();
    FRHeatedSeat.poll();
}