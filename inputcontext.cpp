#include "inputcontext.hpp"
#include "keyname.hpp"

InputContext::InputContext()
{
    keyBindings.emplace(KeyName::UP_KEY, sf::Keyboard::W);
    keyBindings.emplace(KeyName::DOWN_KEY, sf::Keyboard::S);
    keyBindings.emplace(KeyName::CONFIRM_KEY, sf::Keyboard::Enter);
    keyBindings.emplace(KeyName::CANCEL_KEY, sf::Keyboard::BackSpace);
}

InputContext::~InputContext()
{

}
