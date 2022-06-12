//
// Created by gabriele on 12/06/22.
//

#include "Game.h"

//private methods
void Game::initVariables() {
    this->app = nullptr;
}

void Game::initWindow() {
    this->videoMode.height = 600;
    this->videoMode.width = 800;

    this->app = new sf::RenderWindow(this->videoMode, "Zombicide", sf::Style::Titlebar | sf::Style::Close);

}

//Constructors / destructors
Game::Game() {
    this->initVariables();
    this->initWindow();
}

Game::~Game() {
    delete this->app;
}

//Accessors

const bool Game::isRunning() const{
    return this->app->isOpen();
}

//Methods.

void Game::pollEvents() {
    while (this->app->pollEvent(this->event)) {

        switch (this->event.type) {
            case sf::Event::Closed:
                this->app->close();
                break;
            case sf::Event::KeyPressed:
                if (this->event.key.code == sf::Keyboard::Escape) {
                    this->app->close();
                }
                break;
            default:
                break;
        }

    }
}

void Game::update() {
    this->pollEvents();

}

void Game::render() {
    /*
     * @return void
     *
     * - clear old frame
     * - render objects
     * - display new frame
     *
     * Render the game.
     */
    this->app->clear();

    //Draw game here


    this->app->display();
}



