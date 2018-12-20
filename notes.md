# Notes

Scratchpad during development.

Delete this or put it in the docs.

## Content

### GTest

Why GTest should be built locally, from [their FAQ page](https://github.com/fuchsia-mirror/third_party-googletest/blob/master/googletest/docs/FAQ.md#why-is-it-not-recommended-to-install-a-pre-compiled-copy-of-google-test-for-example-into-usrlocal).

In-depth [article](https://crascit.com/2015/07/25/cmake-gtest/)
This is ok but you can't use alias libraries. May still be possible but requires more work.

Also see [DownloadProject](https://github.com/Crascit/DownloadProject), a CMake
module that is recommended by the [GitBook](https://cliutils.gitlab.io/modern-cmake/chapters/projects/download.html).

They recently tried to improve CMake support. See
[this pull request](https://github.com/google/googletest/pull/1682).
I can't get alias targets to work.

Later they're
[revisiting it](https://github.com/google/googletest/pull/1785).

Capture individual test cases using the CMake module
[GoogleTest](https://cmake.org/cmake/help/v3.13/module/GoogleTest.html#module:GoogleTest).

Specifically,
[gtest_discover_tests](https://cmake.org/cmake/help/v3.13/module/GoogleTest.html#command:gtest_discover_tests).

Set C++ standard:
[blog post](https://crascit.com/2015/03/28/enabling-cxx11-in-cmake/)

For libraries, it's perferable to set the standard per-taget:
[gitlab book](https://cliutils.gitlab.io/modern-cmake/chapters/features/cpp11.html).


### Run

Run docker with:
```bash
$ ENV_FILE=test.env ./docker_run.sh gtest
container $ cmake ../led_on/ -DCOMPILE_UNIT_TESTS=ON
```
