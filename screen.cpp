#include "screen.hpp"

Screen::Screen(Game& game, sf::Window& window, Renderer& renderer)
: game {game}, window {window}, renderer {renderer}
{
}

Screen::~Screen()
{

}
