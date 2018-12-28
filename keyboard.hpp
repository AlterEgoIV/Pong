#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <SFML/Graphics.hpp>
#include <array>

class Keyboard
{
public:
    Keyboard();
    void pressKey(const sf::Keyboard::Key& keyCode);
    void releaseKey(const sf::Keyboard::Key& keyCode);
    bool isKeyPressed(const sf::Keyboard::Key& keyCode);

private:
    std::array<bool, sf::Keyboard::KeyCount> keys;
};

#endif
