#ifndef PLAYCONTEXT_H
#define PLAYCONTEXT_H

#include <vector>
#include "inputcontext.hpp"

enum class Event;

class PlayContext : public InputContext
{
public:
    std::vector<Event> update(InputHandler& inputHandler) override;

private:

};

#endif // PLAYCONTEXT_H
