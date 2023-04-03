#include <iostream>
#include <string>
using namespace std;


namespace ariel{
    
    class card
    {
    private:
        int value;
        std :: string suit;
    public:
        card(int value, std :: string suit);
         int getValue(){
            return this->value;
        }
        
        void setValue(int val){
            this->value = val;
        }

        std :: string getSuit() {
            return this->suit;
        }

        void setSuit(string suit){
            this->suit = suit;
        }
    };

}     