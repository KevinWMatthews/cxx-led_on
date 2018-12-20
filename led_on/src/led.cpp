#include "led.h"

void Led::TurnOn()
{
    gpio_.Drive(Gpio::State::High);
}
