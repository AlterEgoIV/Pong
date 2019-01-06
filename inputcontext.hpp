#ifndef INPUTCONTEXT_H
#define INPUTCONTEXT_H

#include <vector>
#include <map>
#include <SFML/Graphics.hpp>

class InputHandler;
enum class Event;
enum class KeyName;

class InputContext
{
public:
    InputContext();
    virtual ~InputContext();
    virtual std::vector<Event> update(InputHandler& inputHandler) = 0;

protected:
    std::map<KeyName, sf::Keyboard::Key> keyBindings;
};

#endif // INPUTCONTEXT_H
