#include "playscreen.hpp"
#include "event.hpp"
#include <iostream>

PlayScreen::PlayScreen(Game& game, sf::Window& window, Renderer& renderer)
: Screen(game, window, renderer)
{

}

void PlayScreen::update(std::vector<Event> events)
{
    for(Event& event : events)
    {
        switch(event)
        {
            case Event::MOVE_UP:
            {
                std::cout << "Moved Up";
                break;
            }

            case Event::MOVE_DOWN:
            {
                break;
            }
        }
    }
}
