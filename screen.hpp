#ifndef SCREEN_H
#define SCREEN_H

#include <SFML/Graphics.hpp>

class Game;
class Renderer;

class Screen
{
public:
    Screen(Game& game, sf::Window& window, Renderer& renderer);
    virtual void update() = 0;

protected:

private:
    Game& game;
    sf::Window& window;
    Renderer& renderer;
};

#endif // SCREEN_H
