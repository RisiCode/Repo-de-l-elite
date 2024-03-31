#include <iostream>

#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "Issou La Chancla");

    sf::Texture texture;
    if (!texture.loadFromFile("img/full.png", sf::IntRect(0, 0, 200, 200)))
    {
        std::cout << "Bougnada" << std::endl;
    }

    texture.setRepeated(true);

    sf::Sprite sprite;
    sprite.setTexture(texture);
    sprite.setTextureRect(sf::IntRect(0, 0, 200, 200));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(sprite);
        window.display();
    }

    return 0;

}