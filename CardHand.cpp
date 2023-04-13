//CardHand.cpp
//
//

#include "CardHand.h"
#include "card.h"

CardHand::CardHand()
{

};


CardHand::CardHand(string Cards)
{
    chosenCard = Cards;
}

void CardHand::setCHValue(string value)
{
    chosenValue = value;
}

void CardHand::setCHSuit(string suit)
{
    chosenSuit = suit;
}

string CardHand::getCHValue()
{
    return chosenValue;
}

string CardHand::getCHSuit()
{
    return chosenSuit;
}

string CardHand::getCHCard()
{
    return (chosenValue + " of " + chosenSuit);
}