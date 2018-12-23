#include "renderer.hpp"

Renderer::Renderer(sf::RenderWindow& window) : window{window}
{

}

void Renderer::render()
{
    window.clear(sf::Color::Black);
    window.display();
}
