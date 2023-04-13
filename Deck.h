//Deck.h
//
//

#ifndef POKER_DECK_H
#define POKER_DECK_H

#include "card.h"
#include "CardHand.h"
#include <cstdlib>
#include <ctime>
#include <iomanip>

class Deck
{
public:
    Deck();
    void shuffle();
    card dealCard();
    void printDeck() const;

private:
    card *deck;
    int currentCard;


};


#endif //POKER_DECK_H
