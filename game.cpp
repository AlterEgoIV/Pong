#include <iostream>
#include "game.hpp"
#include "screenname.hpp"
#include "mainmenuscreen.hpp"
#include "playscreen.hpp"

Game::Game() : window(sf::VideoMode(800, 600), "Pong"), renderer(window)
{
    window.setFramerateLimit(60);
    window.setKeyRepeatEnabled(false);
}

void Game::init()
{
    screens.emplace(ScreenName::MAINMENU_SCREEN, new MainMenuScreen(*this, window, renderer));
    screens.emplace(ScreenName::PLAY_SCREEN, new PlayScreen(*this, window, renderer));
    screen = screens[ScreenName::PLAY_SCREEN];
}

void Game::changeScreen(ScreenName screenName)
{
    screen = screens[screenName];
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
