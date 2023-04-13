//Deck.cpp
//
//
#include "Deck.h"
#include "card.h"
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int DECK_SIZE  = 52;

void Deck::printDeck() const
{
    for(int i = 0; i < DECK_SIZE ; i++)
    {
        cout<<setw(25)<<deck[i].print();
        if((i + 1) % 4 == 0)
        {
            cout << endl;
        }

    }
}

Deck::Deck()
{
    string value[] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    deck = new card[DECK_SIZE];
    currentCard = 0;
    for(int count = 0; count < DECK_SIZE ; count++)
    {
        deck[count] = card(value[count % 13], suits[count / 13]);
    }
}

void Deck::shuffle()
{
    currentCard = 0;
    for(int a = 0; a < DECK_SIZE ; a++)
    {
        int b = (rand() + time(0)) % DECK_SIZE ;
        card temp = deck[a];
        deck[a] = deck[b];
        deck[b] = temp;

    }
}

card Deck::dealCard()
{
    if(currentCard > DECK_SIZE )
    {
        shuffle();
    }
    if(currentCard < DECK_SIZE )
    {
        return (deck[currentCard++]);
    }
    return (deck[0]);
}

