#include "keyboard.hpp"

Keyboard::Keyboard() : keys {false}
{

}

void Keyboard::pressKey(const sf::Keyboard::Key& keyCode)
{
    keys[keyCode] = true;
}

void Keyboard::releaseKey(const sf::Keyboard::Key& keyCode)
{
    keys[keyCode] = false;
}

bool Keyboard::isKeyPressed(const sf::Keyboard::Key& keyCode)
{
    return keys[keyCode];
}
