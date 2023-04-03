#include <iostream>
#include <stdexcept>
#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("Test Initialization") {
    Player p1("Alice");
    Player p2("Bob");

    Game game(p1,p2);

   
}


TEST_CASE("Test start"){
    //like the exmple in demo.cpp
    Player p1("Alice");
    Player p2("Bob");

    Game game(p1,p2);

    CHECK(p1.stacksize() == 26);
    CHECK(p2.stacksize() == 26);
    CHECK(p1.cardesTaken() == 0);
    CHECK(p2.cardesTaken() == 0);
}

//check that all the game is proper and have no more then 26 cards and no less then 0
TEST_CASE("Test proper game"){
    Player p1("Alice");
    Player p2("Bob");

    Game game(p1,p2);
    for (int i = 0; i < 26; i++) {
        CHECK_NOTHROW(game.playTurn());
        CHECK((p1.stacksize() <= 25 || p2.stacksize() <=25));
        CHECK((p2.cardesTaken() >= 0 || p2.cardesTaken() >= 0));
    }

}








