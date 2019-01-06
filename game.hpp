#ifndef GAME_H
#define GAME_H

#include <map>
#include <SFML/Graphics.hpp>
#include "inputhandler.hpp"
#include "renderer.hpp"

enum class ScreenName;
class Screen;

class Game
{
public:
    Game();
    ~Game();
    void init();
    void run();
    void changeScreen(ScreenName screenName);

private:
    sf::RenderWindow window;
    sf::Event event;
    std::map<ScreenName, Screen*> screens;
    Screen* screen;
    Keyboard keyboard;
    InputHandler inputHandler;
    Renderer renderer;
};

#endif
