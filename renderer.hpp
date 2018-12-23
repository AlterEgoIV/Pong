#ifndef RENDERER_H
#define RENDERER_H

#include <SFML/Graphics.hpp>

class Renderer
{
public:
    Renderer(sf::RenderWindow& window);
    void render();

private:
    sf::RenderWindow& window;
};

#endif
