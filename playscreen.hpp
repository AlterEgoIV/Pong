#ifndef PLAYSCREEN_H
#define PLAYSCREEN_H

#include "screen.hpp"

class PlayScreen : public Screen
{
public:
    PlayScreen(Game& game, sf::Window& window, Renderer& renderer);
    void update() override;

protected:

private:
};

#endif // PLAYSCREEN_H
