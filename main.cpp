#include "game.hpp"
#include "vector2.hpp"
#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    Vector2 v1{5., 3.};
    sf::Vector2f v2 = v1;

    Game game;

    game.run();

    return 0;
}
