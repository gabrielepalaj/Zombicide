//
// Created by gabriele on 12/06/22.
//
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <iostream>
#include "Menu.h"

#ifndef ZOMBICIDE_GAME_H
#define ZOMBICIDE_GAME_H

/*
 * Class that act as game engine.
 */

class Game {
private:
    //variables
    State state;
    //Window
    sf::RenderWindow *app;
    sf::VideoMode videoMode;
    sf::Event event;

    //Enemies
    sf::RectangleShape enemy;

    //private methods
    void initVariables();
    void initWindow();
    void initEnemies();

public:
    //Costructors / destructors
    Game();
    ~Game();

    //Accessors
    bool isRunning() const;

    State updateState() const;

    //Methods
    void pollEvents();
    void run();
    void update();
    void render();
};


#endif //ZOMBICIDE_GAME_H
