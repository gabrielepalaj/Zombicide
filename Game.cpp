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

void Game::initEnemies(){
    //posizione in base all'angolo alto-sx

    this->enemy.setSize(sf::Vector2f(50.f, 50.f));
    this->enemy.setPosition(100, 100);
    this->enemy.setFillColor(sf::Color::Red);
    this->enemy.setOutlineColor(sf::Color::Blue);
    this->enemy.setOutlineThickness(2.f);

}

//Constructors / destructors
Game::Game() {
    this->initVariables();
    this->initWindow();
    this->initEnemies();

}

Game::~Game() {
    delete this->app;
}

//Accessors

bool Game::isRunning() const{
    return this->app->isOpen();
}

//Methods

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

    //update mouse position relative to the window
    //std::cout<<"Mouse position: " + sf::Mouse::getPosition(*this->app).x<<","<<sf::Mouse::getPosition(*this->app).y<<std::endl;
    //update mouse position relative to the screen
    //std::cout<<"Mouse position: " + sf::Mouse::getPosition().x<<","<<sf::Mouse::getPosition().y<<std::endl;

    //update enemy position relative to the mouse position
    //this->enemy.setPosition(sf::Mouse::getPosition(*this->app).x-(enemy.getSize().x/2), sf::Mouse::getPosition(*this->app).y -(enemy.getSize().y/2));

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
    this->app->draw(this->enemy);


    this->app->display();
}

void Game::run() {
    while (this->isRunning()) {
        this->update();
        this->render();
    }
}




