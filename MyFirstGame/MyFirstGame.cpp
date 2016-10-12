#include <stdafx.h>
#include "SFML/Graphics.hpp"
#include <SFML\Window\Event.hpp>
#include <iostream>



int randHeightPick();
int randWidthPick();
int randHeightPick2();
int randWidthPick2();
int randHeightPick3();
int randWidthPick3();
int playerCardOneScore(int playerScore);

//               A  2   3    4    5    6    7    8     9    10   J    Q    K
int cardWidth[]{ 0, 79, 158, 237, 316, 395, 474, 553, 632, 711, 790, 869, 948 };

int cardHeight[]{ 0, 123, 246, 369 };


int main(int argc, char ** argv) {
    int cardX1 = 0;
    int cardX2 = 0;
    int cardX3 = 0;
    int cardY1 = 0;
    int cardY2 = 0;
    int cardY3 = 0;

    cardX1 = cardWidth[randWidthPick()];
    cardX2 = cardWidth[randWidthPick2()];
    cardX3 = cardWidth[randWidthPick3()];
    cardY1 = cardHeight[randHeightPick()];
    cardY2 = cardHeight[randHeightPick2()];
    cardY3 = cardHeight[randHeightPick3()];

    sf::RenderWindow renderWindow(sf::VideoMode(1000, 720), "Blackjack");

    sf::Event event;
    sf::Texture cards;
    cards.loadFromFile("images/cards.png");

    sf::IntRect rectSourceCards(cardX1, cardY1, 79, 123);
    sf::Sprite cardImage1(cards, rectSourceCards);
    cardImage1.setPosition(200, 200);

    sf::IntRect rectSourceCards2(cardX2, cardY2, 79, 123);
    sf::Sprite cardImage2(cards, rectSourceCards2);
    cardImage2.setPosition(250, 150);

    sf::IntRect rectSourceCards3(cardX3, cardY3, 79, 123);                  
    sf::Sprite cardImage3(cards, rectSourceCards3);
    cardImage3.setColor(sf::Color::Black);
  
    sf::Font font;
    font.loadFromFile("fonts/CoffeeTin Initials.ttf");
  
    sf::Text text("Press Space to Hit", font);
    text.setCharacterSize(30);
    text.setStyle(sf::Text::Bold);
    text.setPosition(350, 0);

    std::cout << playerCardOneScore();  // FIXME: Can't get right values for PCOS

    while (renderWindow.isOpen()) {
        while (renderWindow.pollEvent(event)) {

            switch (event.type) {

            case sf::Event::Closed:
                renderWindow.close();
                break;

            case sf::Event::KeyPressed:

                if (event.key.code == sf::Keyboard::Space) {

                  cardImage3.setColor(sf::Color::White);
                  cardImage3.setPosition(300, 100);
                }
                break;
            }
        }

        renderWindow.clear(sf::Color(0, 160, 55, 0));
        renderWindow.draw(cardImage1);
        renderWindow.draw(cardImage2);
        renderWindow.draw(cardImage3);
        renderWindow.draw(text);
        renderWindow.display();
    }
}



 


