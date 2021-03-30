#include <iostream>
#include <string>
#include "Card.h"

using namespace std;

Card::Card()
{
    rank = ' ';
    suit = ' ';
}
//suits: club = c, diamonds = d, hearts = h, spades = s
Card::Card(char r, char s)
{
    rank = r;
    suit = s;
}

void Card::setCard(char r, char s)
{
    rank = r;
    suit = s;
}

int Card::getValue()
{
    if(rank == 'a')
    {
        return 1;
    }
    else if(rank == '2')
    {
        return 2;
    }
    else if(rank == '3')
    {
        return 3;
    }else if(rank == '4')
    {
        return 4;
    }else if(rank == '5')
    {
        return 5;
    }else if(rank == '6')
    {
        return 6;
    }else if(rank == '7')
    {
        return 7;
    }else if(rank == '8')
    {
        return 8;
    }else if(rank == '9')
    {
        return 9;
    }else if(rank == 't')
    {
        return 10;
    }else if(rank == 'j')
    {
        return 10;
    }else if(rank == 'q')
    {
        return 10;
    }else if(rank == 'k')
    {
        return 10;
    }
    else
    {
        return 0;
    }
    
}

void Card::showCard()
{
    string suitName = "";
    string rankVal = "";
    if(suit == 'c')
    {
        suitName += "C";
    }
    else if(suit == 'd')
    {
        suitName += "D";
    }
    else if(suit == 'h')
    {
        suitName += "H";
    }
    else if(suit == 's')
    {
        suitName += 'S';
    }

    if(rank == 'a')
    {
        rankVal += "A";
    }
    else if(rank == '2')
    {
        rankVal += "2";
    }
    else if(rank == '3')
    {
        rankVal += "3";
    }
    else if(rank == '4')
    {
        rankVal += "4";
    }
    else if(rank == '5')
    {
        rankVal += "5";
    }
    else if(rank == '6')
    {
        rankVal += "6";
    }
    else if(rank == '7')
    {
        rankVal += "7";
    }
    else if(rank == '8')
    {
        rankVal += "8";
    }
    else if(rank == '9')
    {
        rankVal += "9";
    }
    else if(rank == 't')
    {
        rankVal += "10";
    }
    else if(rank == 'j')
    {
        rankVal += "J";
    }
    else if(rank == 'q')
    {
        rankVal += "Q";
    }
    else if(rank == 'k')
    {
        rankVal += "K";
    }
    cout << rankVal << suitName << " ";
    
}