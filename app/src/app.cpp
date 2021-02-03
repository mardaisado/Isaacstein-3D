#include <windows.h>
#include <iostream>

#include <SFML/Graphics.hpp>
#include "vector"

#define WIDTH 800
#define HEIGHT 500
#define FOV 90

using namespace std;
// hello
int main()
{
    struct Point{
        int x;
        int y;
    };

    struct Wall{
        Point p1;
        Point p2;
    };
    
    struct Map{
        int width;
        int height;
        vector<Wall> walls;
    };

    struct Player{
        int posX;
        int posY;
        float angle;
    };

    Player p1;
    p1.posX = 50;
    p1.posY = 50;
    p1.angle = 0;

    //sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!",sf::Style::Fullscreen);
    sf::RenderWindow window(sf::VideoMode(800, 500), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
