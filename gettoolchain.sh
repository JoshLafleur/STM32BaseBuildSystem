#!/bin/bash

wget https://developer.arm.com/-/media/Files/downloads/gnu-rm/10.3-2021.10/gcc-arm-none-eabi-10.3-2021.10-x86_64-linux.tar.bz2 -O embedded/toolchains/gcc-arm-none-eabi/gcc-arm-none-eabi.tar.xz
tar -xf embedded/toolchains/gcc-arm-none-eabi/gcc-arm-none-eabi.tar.xz -C embedded/toolchains/gcc-arm-none-eabi/ --strip-components 1