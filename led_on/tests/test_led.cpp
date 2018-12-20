#include "led.h"
#include "gpio.h"
#include "gtest/gtest.h"

TEST(Led, CreateDrivesGpioLow)
{
    auto gpio_spy = Gpio();
    Led {gpio_spy};
    ASSERT_EQ(Gpio::State::Low, gpio_spy.ValueOf());
}

TEST(Led, TurnLedOnSetsGpioHigh)
{
    auto gpio_spy = Gpio();
    auto led = Led {gpio_spy};
    led.TurnOn();
    ASSERT_EQ(Gpio::State::High, gpio_spy.ValueOf());
}

TEST(Led, DestroyDrivesGpioLow)
{
    auto gpio_spy = Gpio();
    auto led = Led {gpio_spy};
    led.TurnOn();
    led.~Led();
    ASSERT_EQ(Gpio::State::Low, gpio_spy.ValueOf());
}
