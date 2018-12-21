#ifndef GPIO_H_INCLUDED
#define GPIO_H_INCLUDED

class Gpio
{
public:
    enum class State
    {
        Low, High,
    };
    virtual void Drive(State) = 0;
    virtual State ValueOf() = 0;
};

#endif
