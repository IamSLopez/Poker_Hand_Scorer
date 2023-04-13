//card.cpp
//
//

#include "card.h"
#include <string>
#include <iostream>

using namespace std;

card::card()
{

}
card::card(string cardValue, string cardSuit)
{
    value = cardValue;
    suit = cardSuit;
}

string card::printValue() const
{
    return value;
}

string card::printSuit() const
{
    return suit;
}

string card::print() const
{
    return (value + " of " + suit);
}