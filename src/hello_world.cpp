#include "libname/hello_world.h"

std::string libname::helloWorld() {
    return std::string{"Hello world!"};
}

int libname::addFun(int a, int b) {
    return a+b;
}
