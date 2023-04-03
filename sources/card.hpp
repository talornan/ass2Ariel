#pragma once
#include <string> 

using namespace std;



namespace ariel{
    class Card{
        int value;
        string suit;

        public:
        Card(int value, string suit);

        int getValue();

        void setValue(int val);

        string getSuit();

        void setSuit(string suit);
    };
}