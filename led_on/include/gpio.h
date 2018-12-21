#ifndef GPIO_H_INCLUDED
#define GPIO_H_INCLUDED

class Gpio
{
public:
    enum class State
    {
        Low, High,
    };
    Gpio();
    void Drive(State);
    State ValueOf();
private:
    State state_;
};

#endif
