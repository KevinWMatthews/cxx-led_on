#include "led.h"

Led::~Led()
{
    gpio_.Drive(Gpio::State::Low);
}

void Led::TurnOn()
{
    gpio_.Drive(Gpio::State::High);
}
