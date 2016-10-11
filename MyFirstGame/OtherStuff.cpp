#include <stdafx.h>
#include "SFML/Graphics.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

int randWidthPick(){
    srand(time(NULL));

    int answerX = rand() % 13;
    return answerX;
}

int randWidthPick2() {
    
    int answerX = rand() % 13;
    return answerX;
}

int randWidthPick3() {

    int answerX = rand() % 13;
    return answerX;
}

int randHeightPick() {
    srand(time(NULL));

    int answerY = rand() % 4;
    return answerY;
}

int randHeightPick2() {

    int answerY = rand() % 4;
    return answerY;
}

int randHeightPick3() {

    int answerY = rand() % 4;
    return answerY;
}

