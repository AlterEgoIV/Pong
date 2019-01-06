#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <vector>
#include <map>
#include "keyboard.hpp"
#include "event.hpp"

class InputContext;
enum class ContextName;

class InputHandler
{
public:
    //InputHandler();
    InputHandler(Keyboard& keyboard);
    ~InputHandler();
    std::vector<Event> update();
    void setInputContext(const ContextName& contextName);

    Keyboard& keyboard;

protected:

private:
    //Keyboard& keyboard;
    std::map<ContextName, InputContext*> inputContexts;
    InputContext* inputContext;
};

#endif // INPUTHANDLER_H
