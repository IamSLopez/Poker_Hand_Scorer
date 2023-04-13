//
//

#ifndef POKERPROJECT_POKERSCORE_H
#define POKERPROJECT_POKERSCORE_H


class PokerScore
{
public:
    enum Scores{

        HIGH_CARD = 0, //highest card in the player’s hand

        ONE_OF_A_KIND = 1,//one of a card

        ONE_PAIR = 2, //two cards of the same rank

        THREE_OK_A_KIND = 3, //three cards of the same rank

        FOUR_OF_A_KIND = 4, //four cards of the same ranking

        FLUSH = 5, //five cards of the same suit

        STRAIGHT = 6, //five cards in consecutive ranking

        STRAIGHT_FLUSH = 7, //five cards of the same suit and consecutive ranking

        ROYAL_FLUSH = 8, //A, K, Q, J, 10, all the same suit.

        TWO_PAIR = 9, //two cards of the same rank along with another two cards of the same rank

        FULL_HOUSE = 10 //three cards of the same rank along with two cards of the same rank
    };
    //vector<Scores> scores;
    PokerScore();

    void operator+=(const Scores& score);

private:
    int scorer;
    int ace, two, three, four, five, six, seven, eight, nine, ten, jack, queen, king, hearts, diamonds, spades, clubs;
};


#endif //POKERPROJECT_POKERSCORE_H
