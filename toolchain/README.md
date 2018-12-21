# Toolchains

This directory is a convenient location to store cross-compilation toolchains.
They are not commited only to save repo size.

## BeagleBone Black Toolchain

To download the toolchain, run these commands in this directory:
```bash
$ wget -c https://releases.linaro.org/components/toolchain/binaries/6.4-2018.05/arm-linux-gnueabihf/gcc-linaro-6.4.1-2018.05-x86_64_arm-linux-gnueabihf.tar.xz
$ tar xf gcc-linaro-6.4.1-2018.05-x86_64_arm-linux-gnueabihf.tar.xz
$ rm gcc-linaro-6.4.1-2018.05-x86_64_arm-linux-gnueabihf.tar.xz
```
<!-- $ export CC=`pwd`/gcc-linaro-6.4.1-2018.05-x86_64_arm-linux-gnueabihf/bin/arm-linux-gnueabihf- -->

Modified from the [digikey wiki](https://www.digikey.com/eewiki/display/linuxonarm/BeagleBone+Black#BeagleBoneBlack-ARMCrossCompiler:GCC).
