#pragma once

#include <iostream>
#include <string>
#include "card.hpp"

using namespace std;


namespace ariel
{
    class Player
    {
        private:
        string name;

        public:
        
            Player(string name);

            int static stacksize();
            
            int static cardesTaken();

            bool static GetisInGame();
        
            void static SetInGame(bool status);
          
            string getName() const;
            
    };
}