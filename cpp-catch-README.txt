C++ Project Template
====================

This is a simple project template that uses [CMake](https://cmake.org/), 
the package manager [Conan](https://conan.io/), 
and the test library [Catch](https://github.com/catchorg/Catch2).
	[== catch by itself
	#define CATCH_CONFIG_RUNNER
	#include "catch.hpp"   in source code
	
	$ git clone https://github.com/catchorg/Catch2.git
	$ cd Catch2
	$ cmake -Bbuild -H. -DBUILD_TESTING=OFF
	$ sudo cmake --build build/ --target install 
	==]
Its main purpose is to provide a project structure that is ready to go with only minimal adjustments depending on the project itself.

The default structure is configured for building a library, as well as providing an app that uses it.

The folders break down as follows:

```
project
├── CMakeLists.txt
│
├── apps
│   ├── CMakeLists.txt
│   └── main.cpp
│
├── include
│   └── libname 
│       └── hello_world.h
├── src
│   ├── CMakeLists.txt
│   └── hello_world.cpp
│
└── tests
    ├── CMakeLists.txt
    ├── example_test.cpp
    └── main.cpp
```

## Setup instructions

This project depends on CMake and Conan, which need to be installed prior to using this template.
* [CMake installation instructions](https://cmake.org/install/)
* [Conan installation instructions](http://docs.conan.io/en/latest/installation.html)

The folder structure can be copied and used directly with only a few minor adjustments.

1. Modify the name of the project in the root `CMakeLists.txt`.




if folder exist already and to remove 
> rm -rf cpp-project

==================
>git clone --recurse-submodules https://github.com/jblort/cpp-project-template cpp-catch

this project depends on CMake and Conan, Ctest which need to be installed prior to using this template.

CMake installation instructions ($ pip install cmake)
Conan installation instructions ($ pip install conan)

Modify the name of the project in the root CMakeLists.txt.

From the root of the project:

>mkdir build && cd build
>conan install .. && cmake .. && cmake --build .
Run tests with >ctest -V


===================
conan--package manager /ctest unittest framework  /cmake build tool all installed application

==================

╓─[xmshu@xmshu-ThinkPad-S1-Yoga]:/media/xmshu/Windows8_OS/tmp/cpp-catch/build
╙─$cmake ..
-- Conan: Adjusting output directories
-- Conan: Using cmake global configuration
-- Conan: Adjusting default RPATHs Conan policies
-- Conan: Adjusting language standard
-- Current conanbuildinfo.cmake directory: /media/xmshu/Windows8_OS/tmp/cpp-catch/build
-- Conan: Compiler GCC>=5, checking major version 7
-- Conan: Checking correct version: 7
-- Configuring done
-- Generating done
-- Build files have been written to: /media/xmshu/Windows8_OS/tmp/cpp-catch/build

╓─[xmshu@xmshu-ThinkPad-S1-Yoga]:/media/xmshu/Windows8_OS/tmp/cpp-catch/build
╙─$cmake --build .
Scanning dependencies of target PROJECT_NAME
[ 14%] Building CXX object src/CMakeFiles/PROJECT_NAME.dir/hello_world.cpp.o
[ 28%] Linking CXX static library ../lib/libPROJECT_NAME.a
[ 28%] Built target PROJECT_NAME

Scanning dependencies of target PROJECT_NAME-app
[ 42%] Building CXX object apps/CMakeFiles/PROJECT_NAME-app.dir/main.cpp.o
[ 57%] Linking CXX executable ../bin/PROJECT_NAME-app
[ 57%] Built target PROJECT_NAME-app

Scanning dependencies of target PROJECT_NAME-test
[ 71%] Building CXX object tests/CMakeFiles/PROJECT_NAME-test.dir/main.cpp.o
[ 85%] Building CXX object tests/CMakeFiles/PROJECT_NAME-test.dir/example_test.cpp.o
[100%] Linking CXX executable ../bin/PROJECT_NAME-test
[100%] Built target PROJECT_NAME-test

╓─[xmshu@xmshu-ThinkPad-S1-Yoga]:/media/xmshu/Windows8_OS/tmp/cpp-catch/build
╙─$ctest
Test project /media/xmshu/Windows8_OS/tmp/cpp-catch/build
    Start 1: PROJECT_NAME-test:Scenario: Simple scenario
1/1 Test #1: PROJECT_NAME-test:Scenario: Simple scenario ...   Passed    0.01 sec

100% tests passed, 0 tests failed out of 1

Label Time Summary:
PROJECT_NAME-test    =   0.01 sec*proc (1 test)

Total Test time (real) =   0.01 sec



╓─[xmshu@xmshu-ThinkPad-S1-Yoga]:/media/xmshu/Windows8_OS/tmp/cpp-catch/build
╙─$cd bin
╓─[xmshu@xmshu-ThinkPad-S1-Yoga]:/media/xmshu/Windows8_OS/tmp/cpp-catch/build/bin
╙─$ls
PROJECT_NAME-app  PROJECT_NAME-test

╓─[xmshu@xmshu-ThinkPad-S1-Yoga]:/media/xmshu/Windows8_OS/tmp/cpp-catch/build/bin
╙─$./PROJECT_NAME-test
===============================================================================
All tests passed (1 assertion in 1 test case)

╓─[xmshu@xmshu-ThinkPad-S1-Yoga]:/media/xmshu/Windows8_OS/tmp/cpp-catch/build/bin
╙─$./PROJECT_NAME-app
Hello world!

