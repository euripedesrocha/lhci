#include "catch.hpp"
extern "C"{
#include "cucuzator.h"
#include "ultradep.h"
#include "fff.h"
}

DEFINE_FFF_GLOBALS;
FAKE_VOID_FUNC(ultra);


SCENARIO("Sou um blinkador compulsivo","[blk]"){
    GIVEN("Eu consigo blinkar leds coloridos"){
        WHEN("Uma requisição com valor par"){
            cucuzator(0);
            THEN("Um led da cor vermelha pisca"){
                REQUIRE(ultra_fake.call_count==0);
            }
        }

        WHEN("Uma requisição com valor ímpar"){
            THEN("Um led da cor azul pisca"){
            }
        }
    }
}
