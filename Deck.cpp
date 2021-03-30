#include <iostream>
#include <string>
#include "Card.h"
#include "Deck.h"

using namespace std;

Deck::Deck()
{
    topCard = 0;
    
    storage[0] = Card('a', 's');
    storage[1] = Card('2', 's');
    storage[2] = Card('3', 's');
    storage[3] = Card('4', 's');
    storage[4] = Card('5', 's');
    storage[5] = Card('6', 's');
    storage[6] = Card('7', 's');
    storage[7] = Card('8', 's');
    storage[8] = Card('9', 's');
    storage[9] = Card('t', 's');
    storage[10] = Card('j', 's');
    storage[11] = Card('q', 's');
    storage[12] = Card('k', 's');
    storage[13] = Card('a', 'h');
    storage[14] = Card('2', 'h');
    storage[15] = Card('3', 'h');
    storage[16] = Card('4', 'h');
    storage[17] = Card('5', 'h');
    storage[18] = Card('6', 'h');
    storage[19] = Card('7', 'h');
    storage[20] = Card('8', 'h');
    storage[21] = Card('9', 'h');
    storage[22] = Card('t', 'h');
    storage[23] = Card('j', 'h');
    storage[24] = Card('q', 'h');
    storage[25] = Card('k', 'h');
    storage[26] = Card('a', 'd');
    storage[27] = Card('2', 'd');
    storage[28] = Card('3', 'd');
    storage[29] = Card('4', 'd');
    storage[30] = Card('5', 'd');
    storage[31] = Card('6', 'd');
    storage[32] = Card('7', 'd');
    storage[33] = Card('8', 'd');
    storage[34] = Card('9', 'd');
    storage[35] = Card('t', 'd');
    storage[36] = Card('j', 'd');
    storage[37] = Card('q', 'd');
    storage[38] = Card('k', 'd');
    storage[39] = Card('a', 'c');
    storage[40] = Card('2', 'c');
    storage[41] = Card('3', 'c');
    storage[42] = Card('4', 'c');
    storage[43] = Card('5', 'c');
    storage[44] = Card('6', 'c');
    storage[45] = Card('7', 'c');
    storage[46] = Card('8', 'c');
    storage[47] = Card('9', 'c');
    storage[48] = Card('t', 'c');
    storage[49] = Card('j', 'c');
    storage[50] = Card('q', 'c');
    storage[51] = Card('k', 'c');
    
}

void Deck::refreshDeck()
{
    storage[0].setCard('a', 's');
    storage[1].setCard('2', 's');
    storage[2].setCard('3', 's');
    storage[3].setCard('4', 's');
    storage[4].setCard('5', 's');
    storage[5].setCard('6', 's');
    storage[6].setCard('7', 's');
    storage[7].setCard('8', 's');
    storage[8].setCard('9', 's');
    storage[9].setCard('t', 's');
    storage[10].setCard('j', 's');
    storage[11].setCard('q', 's');
    storage[12].setCard('k', 's');
    storage[13].setCard('a', 'h');
    storage[14].setCard('2', 'h');
    storage[15].setCard('3', 'h');
    storage[16].setCard('4', 'h');
    storage[17].setCard('5', 'h');
    storage[18].setCard('6', 'h');
    storage[19].setCard('7', 'h');
    storage[20].setCard('8', 'h');
    storage[21].setCard('9', 'h');
    storage[22].setCard('t', 'h');
    storage[23].setCard('j', 'h');
    storage[24].setCard('q', 'h');
    storage[25].setCard('k', 'h');
    storage[26].setCard('a', 'd');
    storage[27].setCard('2', 'd');
    storage[28].setCard('3', 'd');
    storage[29].setCard('4', 'd');
    storage[30].setCard('5', 'd');
    storage[31].setCard('6', 'd');
    storage[32].setCard('7', 'd');
    storage[33].setCard('8', 'd');
    storage[34].setCard('9', 'd');
    storage[35].setCard('t', 'd');
    storage[36].setCard('j', 'd');
    storage[37].setCard('q', 'd');
    storage[38].setCard('k', 'd');
    storage[39].setCard('a', 'c');
    storage[40].setCard('2', 'c');
    storage[41].setCard('3', 'c');
    storage[42].setCard('4', 'c');
    storage[43].setCard('5', 'c');
    storage[44].setCard('6', 'c');
    storage[45].setCard('7', 'c');
    storage[46].setCard('8', 'c');
    storage[47].setCard('9', 'c');
    storage[48].setCard('t', 'c');
    storage[49].setCard('j', 'c');
    storage[50].setCard('q', 'c');
    storage[51].setCard('k', 'c');
}

Card Deck::deal()
{
    return storage[topCard++];
}

void Deck::shuffle(int size)
{
    for(int i = 0; i < 10000; i++)
    {
        int x = rand() % size;
        int y = rand() % size;
        Card temp = storage[x];
        storage[x] = storage[y];
        storage[y] = temp;
    }

}

int Deck::cardsLeft()
{
    return 52 - topCard;
}

void Deck::showDeck()
{
    for(int i = 0; i < 52; i++)
    {
        if(i != 0 && i % 13 == 0)
        {
            cout << endl;
        }
        storage[i].showCard();
    }
    cout << endl;
}