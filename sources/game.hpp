#pragma once

#include "player.hpp"
#include "card.hpp"

namespace ariel
{
    class Game
    {
        private:
            Player Player1;
            Player Player2;

        public:
            Game(Player p1, Player p2);

            void printLastTurn(); 
            void playAll(); //playes the game untill the end
            void printWiner(); // prints the name of the winning player
            void printLog(); // prints all the turns played one line per turn (same format as game.printLastTurn())
            void printStats();
            void playTurn();
    };
}