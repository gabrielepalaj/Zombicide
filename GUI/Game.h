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
#include "../Classes/Character.h"

#ifndef ZOMBICIDE_GAME_H
#define ZOMBICIDE_GAME_H

/*
 * Class that act as game engine.
 */

class Game {
private:
    //variables
    State state;
    std::vector<std::unique_ptr<Character>> players;
    std::vector<std::unique_ptr<Character>> zombies;
    //Window
    std::unique_ptr<sf::RenderWindow> app;
    sf::VideoMode videoMode;
    sf::Event event;

    //Textures
    std::unique_ptr<sf::Texture> textureBackground;

    //Background
    std::unique_ptr<sf::Sprite> background;


    //private methods
    void initVariables();

    void initWindow();

    void initPlayers();

    void initZombies();

    void drawPlayers();

    void drawZombies();

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
