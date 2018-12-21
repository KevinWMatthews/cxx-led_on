#include "led.h"
#include "gpio_spy.h"
#include "gtest/gtest.h"

TEST(Led, LedOffAfterCreate)
{
    auto gpio_spy = GpioSpy();
    Led {gpio_spy};
    ASSERT_EQ(Gpio::State::Low, gpio_spy.ValueOf());
}

TEST(Led, TurnLedOnDrivesGpio)
{
    auto gpio_spy = GpioSpy();
    auto led = Led {gpio_spy};
    led.TurnOn();
    ASSERT_EQ(Gpio::State::High, gpio_spy.ValueOf());
}

TEST(Led, DestroyTurnsLedOff)
{
    auto gpio_spy = GpioSpy();
    auto led = Led {gpio_spy};
    led.TurnOn();
    led.~Led();
    ASSERT_EQ(Gpio::State::Low, gpio_spy.ValueOf());
}
