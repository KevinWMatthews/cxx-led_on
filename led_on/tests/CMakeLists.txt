add_executable(test_led
    test_led.cpp
)
target_link_libraries(test_led
    PRIVATE gtest gtest_main
)
