//
// Created by gabriele on 12/06/22.
//
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

#ifndef SFMLEXAMPLE_GAME_H
#define SFMLEXAMPLE_GAME_H

/*
 * Class that act as game engine.
 */

class Game {
private:
    //variables
    //Window
    sf::RenderWindow* app;
    sf::VideoMode videoMode;
    sf::Event event;


    //private methods
    void initVariables();
    void initWindow();

public:
    //Costructors / destructors
    Game();
    ~Game();

    //Accessors
    const bool isRunning() const;
    //Methods
    void pollEvents();
    void update();
    void render();

};


#endif //SFMLEXAMPLE_GAME_H
