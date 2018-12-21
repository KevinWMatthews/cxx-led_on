#include "gpio_spy.h"

GpioSpy::GpioSpy()
{
    state_ = Gpio::State::Low;
}

void GpioSpy::Drive(Gpio::State state)
{
    state_ = state;
}

Gpio::State GpioSpy::ValueOf()
{
    return state_;
}
