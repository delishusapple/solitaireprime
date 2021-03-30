#ifndef DECK_H
#define DECK_H

#include <iostream>
#include <string>
#include "Card.h"

using namespace std;

class Deck
{
    private:
        Card storage[52];
        int topCard;
    public:
        Deck();
        void refreshDeck();
        Card deal();
        void shuffle(int size);
        int cardsLeft();
        void showDeck();
};
#endif