#include "inputhandler.hpp"

InputHandler::InputHandler() : keys {false}
{

}

InputHandler::~InputHandler()
{
    //dtor
}

void InputHandler::handleKeyPressed(const sf::Keyboard::Key& keyCode)
{
    keys[keyCode] = true;
}

void InputHandler::handleKeyReleased(const sf::Keyboard::Key& keyCode)
{
    keys[keyCode] = false;
}

bool InputHandler::isKeyPressed(const sf::Keyboard::Key& keyCode)
{
    return keys[keyCode];
}
