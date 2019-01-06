#include "playcontext.hpp"
#include "event.hpp"
#include "inputhandler.hpp"
#include "keyname.hpp"

std::vector<Event> PlayContext::update(InputHandler& inputHandler)
{
    std::vector<Event> events;

    if(inputHandler.keyboard.isKeyPressed(keyBindings[KeyName::UP_KEY]))
    {
        events.push_back(Event::MOVE_UP);
    }

    if(inputHandler.keyboard.isKeyPressed(keyBindings[KeyName::DOWN_KEY]))
    {
        events.push_back(Event::MOVE_DOWN);
    }

    return events;
}
