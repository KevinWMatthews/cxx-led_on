add_executable(test_led
    test_led.cpp
)
target_link_libraries(test_led
    PRIVATE gtest gtest_main led::led
)
target_compile_features(test_led
    PUBLIC cxx_std_14
)
target_compile_options(test_led
    PRIVATE "-Wall"
    PRIVATE "-Wpedantic"
)
set_target_properties(test_led
    PROPERTIES
        CXX_STANDARD_REQUIRED ON
        CXX_EXTENSIONS OFF
)

include(GoogleTest)
gtest_discover_tests(test_led)
