//CardHandScorer.h
//
//

#ifndef POKER_CARDHANDSCORER_H
#define POKER_CARDHANDSCORER_H

#include "CardHand.h"

class CardHandScorer
{
public:
    CardHandScorer();
    CardHandScorer(string,string);
    void setValues(string);
    void setSuits(string);
    string getValues();
    string getSuits();
    string counter();
    string calculateValue(string);
    string calculateSuit(string);
    /*bool aPair;
    bool twoPair;
    bool threeKind;
    bool straight;
    bool fullHouse;
    bool fourKind;
    int highCard;*/
private:
    string value, suit;
    int aceCounter , twoCounter , threeCounter, fourCounter, fiveCounter;
    int sixCounter , sevenCounter , eightCounter, nineCounter, tenCounter, jackCounter, queenCounter, kingCounter;
    int heartsCounter , diamondsCounter, spadesCounter, clubsCounter;
};


#endif //POKER_CARDHANDSCORER_H
