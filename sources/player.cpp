#include "player.hpp"
#include "game.hpp"
using namespace std;

namespace ariel {
    Player::Player(string name) : name(name) {}
        
            int Player :: stacksize(){
                return 26;
            }

            int Player :: cardesTaken(){
                return 0;
            }

            bool Player :: GetisInGame(){
                return true;
            }

            void Player :: SetInGame(bool status){
                return;
            }

            string Player :: getName() const{
                return this -> name;
            }

    };


          