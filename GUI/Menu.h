//
// Created by gabriele on 14/06/22.
//
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <iostream>

#ifndef ZOMBICIDE_MENU_H
#define ZOMBICIDE_MENU_H


class Menu {
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
    Menu();
    ~Menu();

    //Accessors
    bool isRunning() const;
    //Methods
    void pollEvents();
    void run();
    void update();
    void render();
};


#endif //ZOMBICIDE_MENU_H
