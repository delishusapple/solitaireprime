#include <iostream>
#include <string>
#include "Card.h"
#include "Deck.h"

using namespace std;

bool isPrime(int sum)
{
    if(sum <= 1)
    {
        return false;
    }
    for(int i = 2; i < sum; i++)
    {
        if(sum % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    Deck d1 = Deck();
    int input;
    bool game = true;
    int sum;
    int pileCount = 0;
    while(game)
    {
        cout << "1. New Deck\n2. Display Deck\n3. Shuffle Deck\n4. Play Solitaire Prime\n5. Quit" << endl;
        cin >> input;
        switch(input)
        {
            case 1:
                d1.refreshDeck();
                break;
            case 2:
                d1.showDeck();
                break;
            case 3:
                d1.shuffle(52);
                break;
            case 4:
                cout << "Playing Solitaire Prime!!" << endl;
                sum = 0;
                while(d1.cardsLeft() > 0)
                {
                    Card temp;
                    temp = d1.deal();
                    temp.showCard();
                    sum += temp.getValue();
                    if(isPrime(sum) == true)
                    {
                        cout << "Prime: " << sum;
                        cout << endl;
                        sum = 0;
                        pileCount++;
                        if(d1.cardsLeft() == 0)
                        {
                            cout << "Winner in " << pileCount << " piles!" << endl;
                        }
                    }
                    else if(isPrime(sum) == false)
                    {
                        if(d1.cardsLeft() == 0)
                        {
                            cout << "Non-prime end pile: " << sum << endl;
                            cout << "LOSER" << endl;
                        }
                    }
                }
                game = false;
                break;
            case 5:
                game = false;
                break;
            default:
                cout << "Please enter a valid option." << endl;
                break;
        }
    }
    return 0;
}