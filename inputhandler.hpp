#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <SFML/Graphics.hpp>
#include <array>

class InputHandler
{
public:
    InputHandler();
    virtual ~InputHandler();
    void handleKeyPressed(const sf::Keyboard::Key& keyCode);
    void handleKeyReleased(const sf::Keyboard::Key& keyCode);
    bool isKeyPressed(const sf::Keyboard::Key& keyCode);

protected:

private:
    std::array<bool, sf::Keyboard::KeyCount> keys;
};

#endif // INPUTHANDLER_H
