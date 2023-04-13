//main.cpp
//
//
#include <iostream>
#include <string>
#include <vector>
#include "Deck.h"
#include "CardHand.h"
#include "CardHandScorer.h"
#include "PokerScore.h"
using namespace std;


int main() {
    PokerScore Scores;
    int highCardCount = 0, twoKindCount = 0, threeKindCount = 0, fourKindCount = 0, flushCount = 0, straightCount = 0, straightFlushCount = 0;
    int royalFlushCount = 0, twoPairCount = 0, fullHouseCount = 0;
    cout << endl;
    for(int i = 0; i < 1000; i++)
    {
        Deck deck;
        card topCard;
        string value;
        string suit;
        CardHandScorer handValue[5];
        CardHandScorer handSuit[5];
        CardHand CH[5];
        string a, b, c, d, e, aa, bb, cc ,dd ,ee;
        vector<string> ch1;
        deck.shuffle();
        cout << endl;

        for(int j = 0; j < 52; j++)
        {
            topCard = deck.dealCard();

            if(j == 0)
            {
                a = topCard.printValue();
                CH[0].setCHValue(a);
                aa = topCard.printSuit();
                CH[0].setCHSuit(aa);
            }
            else if(j == 5)
            {
                b = topCard.printValue();
                CH[1].setCHValue(b);
                bb = topCard.printSuit();
                CH[1].setCHSuit(bb);
            }
            else if(j == 10)
            {
                c = topCard.printValue();
                CH[2].setCHValue(c);
                cc = topCard.printSuit();
                CH[2].setCHSuit(cc);
            }
            else if(j == 15)
            {
                d = topCard.printValue();
                CH[3].setCHValue(d);
                dd = topCard.printSuit();
                CH[3].setCHSuit(dd);
            }
            else if(j == 20)
            {
                e = topCard.printValue();
                CH[4].setCHValue(e);
                ee = topCard.printSuit();
                CH[4].setCHSuit(ee);
            } else
            {
            }
        }

        for(int k = 0; k < 5; k++)
        {
            ch1.push_back(CH[k].getCHCard());
        }

        cout << "Card hand " << i << ": " << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << ch1[j] << setw(20);
        }

        for(int j = 0; j < 5; j++)
        {
            handValue[j].setValues(CH[j].getCHValue());
        }
        for(int j = 0; j < 5; j++)
        {
            handValue[j].setSuits(CH[j].getCHSuit());
        }
        cout<<endl;

        for(int j = 0; j < 5; j++)
        {
            handSuit[j].setSuits(CH[j].getCHSuit());
        }
        int aceCounter = 0, twoCounter = 0, threeCounter = 0, fourCounter = 0, fiveCounter = 0;
        int sixCounter = 0, sevenCounter = 0, eightCounter = 0, nineCounter = 0, tenCounter = 0, jackCounter = 0, queenCounter = 0, kingCounter = 0;
        int heartsCounter = 0, diamondsCounter = 0, spadesCounter = 0, clubsCounter = 0;
        int tempTwoKind = 0, tempFlush = 0, tempStraight = 0, tempRoyal = 0;
        for (int j = 0; j < 5; j++) {
            value = handValue[j].getValues();

            if (value == "Ace") {
                aceCounter = aceCounter + 1;
            } else if (value == "Two") {
                twoCounter = twoCounter + 1;
            } else if (value == "Three") {
                threeCounter = threeCounter + 1;
            } else if (value == "Four") {
                fourCounter = fourCounter + 1;
            } else if (value == "Five") {
                fiveCounter = fiveCounter + 1;
            } else if (value == "Six") {
                sixCounter = sixCounter + 1;
            } else if (value == "Seven") {
                sevenCounter = sevenCounter + 1;
            } else if (value == "Eight") {
                eightCounter = eightCounter + 1;
            } else if (value == "Nine") {
                nineCounter = nineCounter + 1;
            } else if (value == "Ten") {
                tenCounter = tenCounter + 1;
            } else if (value == "Jack") {
                jackCounter = jackCounter + 1;
            } else if (value == "Queen") {
                queenCounter = queenCounter + 1;
            } else {
                kingCounter = kingCounter + 1;
            }

        }
        for (int j = 0; j < 5; j++) {
            suit = handSuit[j].getSuits();
            if (suit == "Hearts") {
                heartsCounter = heartsCounter + 1;
            } else if (suit == "Clubs") {
                clubsCounter = clubsCounter + 1;
            } else if (suit == "Spades") {
                spadesCounter = spadesCounter + 1;
            }
            else {
                diamondsCounter = diamondsCounter + 1;
            }
        }
        /*cout << "aceCounter  " << aceCounter << endl<<"twoCounter  " << twoCounter <<endl<< "threeCounter  " << threeCounter<<endl<< "fourCounter  " << fourCounter <<endl<<
             "fiveCounter  " << fiveCounter << endl<<"sixCounter  " <<sixCounter<<endl<<"sevenCounter  "<<sevenCounter<<endl<<"eightCounter  "<<eightCounter<<endl<<
             "nineCounter  "<<nineCounter<<endl<<"tenCounter  "<<tenCounter<<endl<<"jackCounter  "<<jackCounter<<endl<<"queenCounter  "<<queenCounter<<endl<<
             "kingCounter  "<<kingCounter<<endl<<"heartsCounter  "<<heartsCounter<<endl<<"diamondsCounter  "<<diamondsCounter<<endl<<"spadesCounter  "<<spadesCounter<<endl<<
             "clubsCounter  "<<clubsCounter<< endl << endl << endl;*/

        if((aceCounter == 4) || (twoCounter == 4) || (threeCounter == 4) || (fourCounter == 4) || (fiveCounter ==  4) ||(sixCounter == 4) || (sevenCounter == 4) || (eightCounter == 4) || (nineCounter == 4) || (tenCounter == 4) || (jackCounter == 4) || (queenCounter == 4) || (kingCounter== 4))
        {
                fourKindCount = fourKindCount+1;
                threeKindCount = threeKindCount+1;
                twoKindCount = twoKindCount+1;
                tempTwoKind = tempTwoKind+1;
        }

        if((aceCounter == 3) || (twoCounter == 3) || (threeCounter == 3) || (fourCounter == 3) || (fiveCounter ==  3) ||(sixCounter == 3) || (sevenCounter == 3) || (eightCounter == 3) || (nineCounter == 3) || (tenCounter == 3) || (jackCounter == 3) || (queenCounter == 3) || (kingCounter== 3))
        {
            threeKindCount = threeKindCount+1;
            twoKindCount = twoKindCount+1;
            tempTwoKind = tempTwoKind+1;
        }

        if(aceCounter == 2)
        {
            twoKindCount = twoKindCount+1;
            tempTwoKind = tempTwoKind+1;
        }
        if(twoCounter == 2)
        {
            twoKindCount = twoKindCount+1;
            tempTwoKind = tempTwoKind+1;
        }
        if(threeCounter == 2)
        {
            twoKindCount = twoKindCount+1;
            tempTwoKind = tempTwoKind+1;
        }
        if(fourCounter == 2)
        {
            twoKindCount = twoKindCount+1;
            tempTwoKind = tempTwoKind+1;
        }
        if(fiveCounter ==  2)
        {
            twoKindCount = twoKindCount+1;
            tempTwoKind = tempTwoKind+1;
        }
        if(sixCounter == 2)
        {
            twoKindCount = twoKindCount+1;
            tempTwoKind = tempTwoKind+1;
        }
        if(sevenCounter == 2)
        {
            twoKindCount = twoKindCount+1;
            tempTwoKind = tempTwoKind+1;
        }
        if(eightCounter == 2)
        {
            twoKindCount = twoKindCount+1;
            tempTwoKind = tempTwoKind+1;
        }
        if(nineCounter == 2)
        {
            twoKindCount = twoKindCount+1;
            tempTwoKind = tempTwoKind+1;
        }
        if(tenCounter == 2)
        {
            twoKindCount = twoKindCount+1;
            tempTwoKind = tempTwoKind+1;
        }
        if(jackCounter == 2)
        {
            twoKindCount = twoKindCount+1;
            tempTwoKind = tempTwoKind+1;
        }
        if(queenCounter == 2)
        {
            twoKindCount = twoKindCount+1;
            tempTwoKind = tempTwoKind+1;
        }
        if(kingCounter == 2)
        {
            twoKindCount = twoKindCount+1;
            tempTwoKind = tempTwoKind+1;
        }
        if(tempTwoKind == 2)
        {
            twoPairCount = twoPairCount+1;
        }
        if((threeKindCount == 1) && (tempTwoKind == 2))
        {
            fullHouseCount = fullHouseCount+1;
        }
        if((heartsCounter == 5) || (diamondsCounter == 5) || (spadesCounter == 5) || (clubsCounter == 5))
        {
            flushCount = flushCount+1;
            tempFlush = tempFlush+1;
        }
        if((aceCounter == 1) && (twoCounter == 1) && (threeCounter == 1) && (fourCounter == 1) && (fiveCounter ==  1))
        {
            straightCount = straightCount+1;
            tempStraight = tempStraight+1;
        }
        else if((sixCounter == 1) && (twoCounter == 1) && (threeCounter == 1) && (fourCounter == 1) && (fiveCounter ==  1))
        {
            straightCount = straightCount+1;
            tempStraight = tempStraight+1;
        }
        else if((sixCounter == 1) && (sevenCounter == 1) && (threeCounter == 1) && (fourCounter == 1) && (fiveCounter ==  1))
        {
            straightCount = straightCount+1;
            tempStraight = tempStraight+1;
        }
        else if((sixCounter == 1) && (sevenCounter == 1) && (eightCounter == 1) && (fourCounter == 1) && (fiveCounter ==  1))
        {
            straightCount = straightCount+1;
            tempStraight = tempStraight+1;
        }
        else if((sixCounter == 1) && (sevenCounter == 1) && (eightCounter == 1) && (nineCounter == 1) && (fiveCounter ==  1))
        {
            straightCount = straightCount+1;
            tempStraight = tempStraight+1;
        }
        else if((sixCounter == 1) && (sevenCounter == 1) && (eightCounter == 1) && (nineCounter == 1) && (tenCounter ==  1))
        {
            straightCount = straightCount+1;
            tempStraight = tempStraight+1;
        }
        else if((jackCounter == 1) && (sevenCounter == 1) && (eightCounter == 1) && (nineCounter == 1) && (tenCounter ==  1))
        {
            straightCount = straightCount+1;
            tempStraight = tempStraight+1;
        }
        else if((jackCounter == 1) && (queenCounter == 1) && (eightCounter == 1) && (nineCounter == 1) && (tenCounter ==  1))
        {
            straightCount = straightCount+1;
            tempStraight = tempStraight+1;
        }
        else if((jackCounter == 1) && (queenCounter == 1) && (kingCounter == 1) && (nineCounter == 1) && (tenCounter ==  1))
        {
            straightCount = straightCount+1;
            tempStraight = tempStraight+1;
        }
        else if((jackCounter == 1) && (queenCounter == 1) && (kingCounter == 1) && (aceCounter == 1) && (tenCounter ==  1))
        {
            straightCount = straightCount+1;
            tempStraight = tempStraight+1;
            tempRoyal = tempRoyal+1;
        }
        else{

        }

        if ((tempStraight == 1) && (tempFlush == 1))
        {
            straightFlushCount = straightFlushCount+1;
        }
        if ((tempRoyal ==1)&& (tempFlush == 1))
        {
            royalFlushCount = royalFlushCount+1;
        }
        highCardCount = highCardCount+1;

    }

    cout << endl << endl << left << "High Card: " <<  highCardCount << endl;
    cout << "Two of a Kind: " << twoKindCount << endl;
    cout << "Three of a Kind: " << threeKindCount << endl;
    cout << "Four of a Kind: " << fourKindCount << endl;
    cout << "Two Pairs: " << twoPairCount << endl;
    cout << "Flush: " << flushCount << endl;
    cout << "Straight: "<< straightCount << endl;
    cout << "Straight Flush: " << straightFlushCount << endl;
    cout << "Royal Flush: " << royalFlushCount << endl;
    cout << "Full House: " << fullHouseCount << endl;
    return 0;
};

//    HIGH_CARD  //highest card in the player's hand
//
//    ONE_PAIR  //two cards of the same rank
//
//    THREE_OK_A_KIND  //three cards of the same rank
//
//    FOUR_OF_A_KIND  //four cards of the same ranking
//
//    FLUSH  //five cards of the same suit
//
//    STRAIGHT  //five cards in consecutive ranking
//
//    STRAIGHT_FLUSH  //five cards of the same suit and consecutive ranking
//
//    ROYAL_FLUSH  //A, K, Q, J, 10, all the same suit.
//
//    TWO_PAIR  //two cards of the same rank along with another two cards of the same rank
//
//    FULL_HOUSE  //three cards of the same rank along with two cards of the same rank
