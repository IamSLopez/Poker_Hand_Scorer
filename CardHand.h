//CardHand.h
//
//

#ifndef POKER_CARDHAND_H
#define POKER_CARDHAND_H

#include <iostream>
#include <string>
#include "card.h"
using namespace std;

class CardHand
{
public:
    CardHand();
    CardHand(string);
    string getCHValue();
    string getCHSuit();
    string getCHCard();
    void setCHValue(string);
    void setCHSuit(string);
private:
    string chosenCard, chosenValue, chosenSuit;
};


#endif //POKER_CARDHAND_H
