#include <SFML/Graphics.hpp>
#include "Gladiator.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1600, 900), "GGame");
    sf::Texture gladiatorLeft, gladiatorRight, statsBackground;
    if (!gladiatorLeft.loadFromFile("./assets/characters/provocatorG.png"))
        return EXIT_FAILURE;
    if (!gladiatorRight.loadFromFile("./assets/characters/provocatorD.png"))
        return EXIT_FAILURE;
    if (!statsBackground.loadFromFile("./assets/characters/statsBackground.png"))
        return EXIT_FAILURE;
    sf::Sprite sGladiatorLeft(gladiatorLeft);
    sf::Sprite sGladiatorRight(gladiatorRight);
    sf::Sprite sStatsBackground(statsBackground);
    sGladiatorLeft.setPosition(0,(window.getSize().y / 2) - gladiatorLeft.getSize().y/2);
    sGladiatorRight.setPosition(window.getSize().x - gladiatorRight.getSize().x,(window.getSize().y / 2) - gladiatorRight.getSize().y/2);
    sStatsBackground.setPosition(0,(window.getSize().y / 2) - gladiatorLeft.getSize().y/2);

    bool statsOn = false;


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(sGladiatorLeft);
        window.draw(sGladiatorRight);
        if(sGladiatorLeft.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y))
        {
            window.draw(sStatsBackground);
        }
        window.display();
    }

    return 0;
}
