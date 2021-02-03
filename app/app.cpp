#include <windows.h>
#include <iostream>

#include <SFML/Graphics.hpp>
#include "Map.h"
#include "Player.h"

#define WIDTH 800
#define HEIGHT 500
#define FOV 90

using namespace std;
// hello
int main()
{
    Player p1();
    Map map();


    sf::RenderWindow window(sf::VideoMode(800, 500), "SFML works!",sf::Style::Titlebar  | sf::Style::Close);
    //sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "SFML works!");
    sf::CircleShape shape(500.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        // wait for quit button
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        //----------------

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
