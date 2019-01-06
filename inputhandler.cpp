#include "inputhandler.hpp"
#include "inputcontext.hpp"
#include "contextname.hpp"
#include "playcontext.hpp"

//InputHandler::InputHandler()
//{
//    inputContexts.emplace(ContextName::PLAY, new PlayContext);
//
//    inputContext = inputContexts[ContextName::PLAY];
//}

InputHandler::InputHandler(Keyboard& keyboard) : keyboard {keyboard}
{
    inputContexts.emplace(ContextName::PLAY, new PlayContext());

    inputContext = inputContexts[ContextName::PLAY];
}

InputHandler::~InputHandler()
{
    delete inputContext;
}

std::vector<Event> InputHandler::update()
{
    return inputContext->update(*this);
}

void InputHandler::setInputContext(const ContextName& contextName)
{
    inputContext = inputContexts[contextName];
}
