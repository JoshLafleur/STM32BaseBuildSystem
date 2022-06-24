# STM32 Base Scons and Docker build system
Contains start points for multi-target building ontop of a docker container and SCons build system

## Current Supported Boards
1. STM32F103C8 - Blue Pill
2. STM32F429DISCOVERY

## Starting project

1. To build the container, execute from your root directory:
  ./buildcontainer.sh
2. To pull in all the submodules, execute from your root directory:
  git submodule update --init --recursive
3. To retreive the local toolchain, execute from your root directory:
  ./gettoolchain.sh