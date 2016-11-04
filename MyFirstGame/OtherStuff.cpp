#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "OtherStuff.h"

int randXPick(){
    srand(time(NULL));

    int answerX = rand() % 12;
    return answerX;
}

int randYPick() {
    srand(time(NULL));

    int answerY = rand() % 3;
    return answerY;
}

Cards::Cards() {
        x = 0;
        y = 0;
    }

void Cards::rank(int yVal) {
        y = yVal;
        return;
    }

void Cards::suit(int xVal) {
        x = xVal;
        return;
    }

int Cards::getRank() {
        return y;
    }

int Cards::getSuit() {
        return x;
    }

void Cards::setRank(int yVal) {
        y = yVal;
        return;
    }

void Cards::setSuit(int xVal) {
        x = xVal;
        return;
    }

int Cards::getScore() {
        return score;
    }

void Cards::setScore(int newScore) {
        score = newScore;
        return;
    }
