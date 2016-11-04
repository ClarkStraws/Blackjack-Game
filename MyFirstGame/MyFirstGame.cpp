#include <stdafx.h>
#include "SFML/Graphics.hpp"
#include <SFML\Window\Event.hpp>
#include <iostream>
#include "OtherStuff.h"

//           A  2   3    4    5    6    7    8     9    10   J    Q    K
int cardX[]{ 0, 79, 158, 237, 316, 395, 474, 553, 632, 711, 790, 869, 948 };
//           C   D    H    S
int cardY[]{ 0, 123, 246, 369 };

//RANK EQUALS Y, SUIT EQUALS X

int main(int argc, char ** argv) {
 
    Cards card1;
    Cards card2;
    Cards card3;

    card1.setRank(cardY[randYPick()]);
    card2.setRank(cardY[randYPick()]);
    card3.setRank(cardY[randYPick()]);

    card1.setSuit(cardX[randXPick()]);
    card2.setSuit(cardX[randXPick()]);
    card3.setSuit(cardX[randXPick()]);

    sf::RenderWindow renderWindow(sf::VideoMode(1000, 720), "Blackjack");

    sf::Event event;
    sf::Texture cards;
    cards.loadFromFile("images/cards.png");

    sf::IntRect rectSourceCards(card1.getSuit(), card1.getRank(), 79, 123);
    sf::Sprite cardImage1(cards, rectSourceCards);
    cardImage1.setPosition(200, 200);

    sf::IntRect rectSourceCards2(card2.getSuit(), card2.getRank(), 79, 123);
    sf::Sprite cardImage2(cards, rectSourceCards2);
    cardImage2.setPosition(250, 150);

    sf::IntRect rectSourceCards3(card3.getSuit(), card3.getRank(), 79, 123);
    sf::Sprite cardImage3(cards, rectSourceCards3);
    cardImage3.setColor(sf::Color::Black);
  
    sf::Font font;
    font.loadFromFile("fonts/CoffeeTin Initials.ttf");
  
    sf::Text text("Press Space to Hit", font);
    text.setCharacterSize(30);
    text.setStyle(sf::Text::Bold);
    text.setPosition(350, 0);

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



 


