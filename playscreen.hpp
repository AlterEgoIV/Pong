#ifndef PLAYSCREEN_H
#define PLAYSCREEN_H

#include <vector>
#include "screen.hpp"

class GameObject;

class PlayScreen : public Screen
{
public:
    PlayScreen(Game& game, sf::Window& window, Renderer& renderer);
    void update(std::vector<Event> events) override;

protected:

private:
    std::vector<GameObject*> gameObjects;
};

#endif // PLAYSCREEN_H
