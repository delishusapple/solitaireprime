#ifndef CARD_H
#define CARD_H

#include <iostream>
#include <string>

using namespace std;

class Card
{
    private:
        char rank;
        char suit;
    public:
        Card(); //create blank card
        Card(char r, char s); //overloaded constructor, set rank and suit
        void setCard(char r, char s); //set blank card to certain card
        int getValue(); //integer value of card ie ace = 1, 2 = 2, etc
        void showCard(); //display card using 2 fields, ace of spade = AS, 10 of diamonds = 10D
};
#endif