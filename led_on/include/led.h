#ifndef LED_H_INCLUDED
#define LED_H_INCLUDED

#include "gpio.h"

class Led
{
public:
    Led(Gpio& gpio) : gpio_ {gpio} { gpio_.Drive(Gpio::State::Low); };
    void TurnOn();
private:
    Gpio& gpio_;
};

#endif
