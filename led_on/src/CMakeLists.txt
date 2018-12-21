add_library(led
    "${CMAKE_HOME_DIRECTORY}/include/led.h"
    led.cpp
    gpio.cpp
    gpio_spy.cpp
)
target_include_directories(led
    PUBLIC "${CMAKE_HOME_DIRECTORY}/include/"
)
target_compile_features(led
    PUBLIC cxx_std_14
)
target_compile_options(led
    PRIVATE "-Wall"
    PRIVATE "-Wpedantic"
)
set_target_properties(led
    PROPERTIES
        CXX_STANDARD_REQUIRED ON
        CXX_EXTENSIONS OFF
)
add_library(led::led ALIAS led)
