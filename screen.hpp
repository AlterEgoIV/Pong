#ifndef SCREEN_H
#define SCREEN_H

#include <SFML/Graphics.hpp>
#include <vector>

class Game;
class Renderer;
enum class Event;

class Screen
{
public:
    Screen(Game& game, sf::Window& window, Renderer& renderer);
    virtual ~Screen();
    virtual void update(std::vector<Event> events) = 0;

protected:

private:
    Game& game;
    sf::Window& window;
    Renderer& renderer;
};

#endif // SCREEN_H
