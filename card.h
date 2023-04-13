//card.h
//
//

#ifndef POKER_CARD_H
#define POKER_CARD_H
#include <string>
#include <iostream>
using namespace std;

class card
{
public:
    card (string cardValue, string cardSuit);
    string print() const;
    string printValue() const;
    string printSuit() const;
    card();
private:
    string value;
    string suit;
};


#endif //POKER_CARD_H
