#ifndef GPIO_SPY_H_INCLUDED
#define GPIO_SPY_H_INCLUDED

#include "gpio.h"

class GpioSpy : public Gpio
{
public:
    GpioSpy();
    void Drive(State) override;
    State ValueOf() override;
private:
    State state_;
};

#endif
