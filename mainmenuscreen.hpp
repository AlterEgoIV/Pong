#ifndef MAINMENUSCREEN_H
#define MAINMENUSCREEN_H

#include "screen.hpp"

class MainMenuScreen : public Screen
{
public:
    MainMenuScreen(Game& game, sf::Window& window, Renderer& renderer);
    void update() override;

private:

};

#endif // MAINMENUSCREEN_H
