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

enum class State {
    Menu, Game, End
};

class Menu {
private:
    //variables
    State state;    //current state

    //Window
    std::unique_ptr<sf::RenderWindow> app;
    sf::VideoMode videoMode;
    sf::Event event;


    //Textures
    std::unique_ptr<sf::Texture> textureBackground;
    std::unique_ptr<sf::Texture> texturePlay;
    std::unique_ptr<sf::Texture> textureExit;
    //Background
    std::unique_ptr<sf::Sprite> background;
    //Buttons
    //create smart poinert to sprite buttons
    std::unique_ptr<sf::Sprite> buttonPlay;
    std::unique_ptr<sf::Sprite> buttonExit;
    //sf::Sprite *buttonCredits;



    //private methods
    void initVariables();

    void initWindow();

    void initButtons();


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
