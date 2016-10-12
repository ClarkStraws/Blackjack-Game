#include <stdafx.h>
#include "SFML/Graphics.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

int randWidthPick(){
    srand(time(NULL));

    int answerX = rand() % 12;
    return answerX;
}

int randWidthPick2() {
    
    int answerX = rand() % 12;
    return answerX;
}

int randWidthPick3() {

    int answerX = rand() % 12;
    return answerX;
}

int randHeightPick() {
    srand(time(NULL));

    int answerY = rand() % 3;
    return answerY;
}

int randHeightPick2() {

    int answerY = rand() % 3;
    return answerY;
}

int randHeightPick3() {

    int answerY = rand() % 3;
    return answerY;
}

int playerCardOneScore(int playerScore) {
    int playerRunningScore = 0;

    if (playerScore == 0) {
        playerRunningScore = 11;
    }
    if (playerScore == 1) {
        playerRunningScore = 2;
    }
    if (playerScore == 2) {
        playerRunningScore = 3;
    }
    if (playerScore == 3) {
        playerRunningScore = 4;
    }
    if (playerScore == 4) {
        playerRunningScore = 5;
    }
    if (playerScore == 5) {
        playerRunningScore = 6;
    }
    if (playerScore == 6) {
        playerRunningScore = 7;
    }
    if (playerScore == 7) {
        playerRunningScore = 8;
    }
    if (playerScore == 8) {
        playerRunningScore = 9;
    }
    if (playerScore == 9 || playerScore == 10
       || playerScore == 11 || playerScore == 12) {

        playerRunningScore = 10;
    }
    return playerRunningScore;
}