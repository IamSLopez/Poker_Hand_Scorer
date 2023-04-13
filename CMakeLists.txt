cmake_minimum_required(VERSION 3.15)
project(PokerProject)

set(CMAKE_CXX_STANDARD 14)

add_executable(PokerProject main.cpp Deck.cpp Deck.h card.cpp card.h CardHand.cpp CardHand.h CardHandScorer.cpp CardHandScorer.h PokerScore.cpp PokerScore.h)