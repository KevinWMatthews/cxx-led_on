#include "gpio.h"

Gpio::Gpio()
{
    state_ = Gpio::State::Low;
}

void Gpio::Drive(Gpio::State state)
{
    state_ = state;
}

Gpio::State Gpio::ValueOf()
{
    return state_;
}
