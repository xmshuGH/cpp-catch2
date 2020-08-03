#include <catch.hpp>

#include "libname/hello_world.h"


TEST_CASE("Test with zero", "[classic]")
{
   REQUIRE(libname::addFun(33,44) == 77);
   REQUIRE(libname::addFun(0,0) ==0);
   REQUIRE(libname::addFun(-33,33) == 0);
   REQUIRE(libname::addFun(-1,-1) == -2);
   REQUIRE(libname::addFun(-1,-1) != 1);
   REQUIRE(libname::addFun(1,2) == 3);
   
}

SCENARIO("1 scenario") {
    GIVEN("A C++ project template") {
        WHEN("I get the hello world string") {
            auto hw = libname::helloWorld();
            THEN("It works!") {
                REQUIRE(hw == "Hello world!");
            }
            auto x = libname::addFun(3,4);
            THEN("It works!") {
                REQUIRE(x == 7);
            }
        }
    }
}

SCENARIO("2 scenario") {
    GIVEN("A C++ project template") {
        WHEN("I get add correct") {
            auto x = libname::addFun(3,4);
            THEN("It works!") {
                REQUIRE(x == 7);
            }
        }
    }
}

