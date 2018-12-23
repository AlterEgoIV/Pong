#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include "inputhandler.hpp"
#include "renderer.hpp"

class Game
{
public:
    Game();
    void run();

private:
    sf::RenderWindow window;
    sf::Event event;
    InputHandler inputHandler;
    Renderer renderer;
};

#endif
