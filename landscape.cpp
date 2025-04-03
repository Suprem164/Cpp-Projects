//This is a SFML cpp program to draw a night landscape.

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "Landscape");

    sf::CircleShape moon;
    moon.setRadius(80);
    moon.setFillColor(sf::Color::White);
    moon.setPosition(330.f, 180.f);

    sf::RectangleShape land(sf::Vector2f(800.f, 400.f));
    land.setFillColor(sf::Color(50, 50, 70));
    land.setPosition(0.f, 265.f);

    sf::CircleShape star1;
    star1.setRadius(2);
    star1.setFillColor(sf::Color::White);
    star1.setPosition(20.f, 20.f);

    sf::CircleShape star2;
    star2.setRadius(2);
    star2.setFillColor(sf::Color::White);
    star2.setPosition(30.f, 20.f);

    sf::CircleShape star3;
    star3.setRadius(2);
    star3.setFillColor(sf::Color::White);
    star3.setPosition(35.f, 25.f);

    sf::CircleShape star4;
    star4.setRadius(2);
    star4.setFillColor(sf::Color::White);
    star4.setPosition(40.f, 25.f);

    sf::CircleShape star5;
    star5.setRadius(2);
    star5.setFillColor(sf::Color::White);
    star5.setPosition(45.f, 20.f);

    sf::CircleShape star6;
    star6.setRadius(2);
    star6.setFillColor(sf::Color::White);
    star6.setPosition(50.f, 20.f);

    sf::CircleShape star7;
    star7.setRadius(2);
    star7.setFillColor(sf::Color::White);
    star7.setPosition(55.f, 30.f);


    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(moon);
        window.draw(land);
        window.draw(star1);
        window.draw(star2);
        window.draw(star3);
        window.draw(star4);
        window.draw(star5);
        window.draw(star6);
        window.draw(star7);
        window.display();
    }
    return 0;
}
