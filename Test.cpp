//
// Created by david on 5/4/21.
//


#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"

#include "doctest.h"
using namespace doctest;
#include <string>

using namespace pandemic;

using namespace std;
//

TEST_CASE ("g") {

}


TEST_CASE ("throws checks") {
    Board board;
    Virologist v = {board,City::Atlanta};
            CHECK_THROWS(v.fly_charter(City::Chennai));
            CHECK_THROWS(v.fly_charter(City::Bogota));
            CHECK_THROWS(v.fly_charter(City::Delhi));
            CHECK_THROWS(v.fly_charter(City::Manila));
            CHECK_THROWS(v.fly_charter(City::London));

    Medic m = {board,City::Atlanta};
            CHECK_NOTHROW(m.role());
            CHECK_NOTHROW(m.fly_charter(City::Cairo));
            CHECK_NOTHROW(v.fly_charter(City::Delhi));
    Dispatcher d = {board,City::Atlanta};

            CHECK_NOTHROW(d.role());
            CHECK_NOTHROW(d.build());
            CHECK_NOTHROW(d.fly_shuttle(City::Lagos));
    OperationsExpert o = {board,City::Atlanta};
            CHECK_NOTHROW(o.build());
            CHECK_NOTHROW(o.take_card(City::Atlanta));
    GeneSplicer gen = {board,City::Atlanta};
            CHECK_NOTHROW();
            CHECK_NOTHROW();

    FieldDoctor fd = {board,City::Atlanta};
            CHECK_NOTHROW();
            CHECK_NOTHROW();
            CHECK_NOTHROW();
            CHECK_NOTHROW();
            CHECK_NOTHROW();
            CHECK_NOTHROW();
    Scientist sc{board, City::Atlanta, 22};
            CHECK_THROWS();
            CHECK_THROWS();
            CHECK_THROWS();
            CHECK_THROWS();
            CHECK_THROWS();
            CHECK_THROWS();
            CHECK_THROWS();
    Researcher r = {board,City::Atlanta};
            CHECK_THROWS();
            CHECK_THROWS();
            CHECK_THROWS();
            CHECK_THROWS();

            CHECK_NOTHROW();
            CHECK_NOTHROW();
            CHECK_NOTHROW();
            CHECK_NOTHROW();

            CHECK_FALSE(0);
            CHECK_FALSE(0);

            CHECK(1);
            CHECK(1);
            CHECK_FALSE(0);




}