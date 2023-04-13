//CardHandScorer.cpp
//
//

#include "CardHandScorer.h"

CardHandScorer::CardHandScorer()
{
}

CardHandScorer::CardHandScorer(string a, string b)
{
    value = a;

    suit = b;
}

void CardHandScorer::setValues(string b)
{
    value = b;
}
void CardHandScorer::setSuits(string c)
{
    suit = c;
}
string CardHandScorer::getValues()
{
    return value;
}
string CardHandScorer::getSuits()
{
    return suit;
}
string CardHandScorer::counter()
{
    aceCounter = 0;
    twoCounter = 0;
    threeCounter = 0;
    fourCounter = 0;
    fiveCounter = 0;
    sixCounter = 0;
    sevenCounter = 0;
    eightCounter = 0;
    nineCounter = 0;
    tenCounter = 0;
    jackCounter = 0;
    queenCounter = 0;
    kingCounter = 0;
    heartsCounter = 0;
    diamondsCounter = 0;
    spadesCounter = 0;
    clubsCounter = 0;

}
string CardHandScorer::calculateValue(string a)
{
    value = a;
    if(value == "Ace")
    {
        aceCounter = aceCounter + 1;
    }
    else if(value == "Two")
    {
        twoCounter = twoCounter + 1;
    }
    else if(value == "Three")
    {
        threeCounter = threeCounter+1;
    }
    else if(value == "Four")
    {
        fourCounter = fourCounter+1;
    }
    else if(value == "Five")
    {
        fiveCounter = fiveCounter+1;
    }
    else if(value == "Six")
    {
        sixCounter = sixCounter+1;
    }
    else if(value == "Seven")
    {
        sevenCounter = sevenCounter+1;
    }
    else if(value == "Eight")
    {
        eightCounter = eightCounter+1;
    }
    else if(value == "Nine")
    {
        nineCounter = nineCounter+1;
    }
    else if(value == "Ten")
    {
        tenCounter = tenCounter+1;
    }
    else if(value == "Jack")
    {
        jackCounter = jackCounter+1;
    }
    else if(value == "Queen")
    {
        queenCounter = queenCounter+1;
    }
    else
    {
        kingCounter = kingCounter+1;
    }
}
string CardHandScorer::calculateSuit(string a)
{
    suit = a;
    if(suit == "Hearts")
    {
        heartsCounter = heartsCounter++;
    }
    else if(suit == "Clubs")
    {
        clubsCounter = clubsCounter++;
    }
    else if(suit == "Spades")
    {
        spadesCounter = spadesCounter++;
    }
    else
    {
        diamondsCounter = diamondsCounter++;
    }
}
