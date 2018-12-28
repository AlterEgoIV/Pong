#include <iostream>
#include "game.hpp"

Game::Game() : window(sf::VideoMode(800, 600), "Pong"), renderer(window)
{
    window.setFramerateLimit(60);
    window.setKeyRepeatEnabled(false);
}

void Game::run()
{
    while(window.isOpen())
    {
        while(window.pollEvent(event))
        {
            switch(event.type)
            {
                case sf::Event::Closed:
                {
                    window.close();
                    break;
                }

                case sf::Event::KeyPressed:
                {
                    inputHandler.keyboard.pressKey(event.key.code);

                    if(event.key.code == sf::Keyboard::BackSpace)
                    {

                    }

                    break;
                }

                case sf::Event::KeyReleased:
                {
                    inputHandler.keyboard.releaseKey(event.key.code);

                    break;
                }

                case sf::Event::JoystickConnected:
                {
                    std::cout << "Controller connected!\n";
                    break;
                }

                case sf::Event::JoystickDisconnected:
                {
                    std::cout << "Controller disconnected!\n";
                    break;
                }

                case sf::Event::JoystickButtonPressed:
                {
                    std::cout << "Controller button pressed!\n";
                    break;
                }
            }
        }

        if(inputHandler.keyboard.isKeyPressed(sf::Keyboard::Key::H))
        {
            std::cout << "True";
        }

        renderer.render();
    }
}
