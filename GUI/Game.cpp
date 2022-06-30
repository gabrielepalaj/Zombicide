//
// Created by gabriele on 12/06/22.
//

#include "Game.h"

//private methods
void Game::initVariables() {
    this->app = nullptr;
    this->state = State::Game;

}

void Game::initWindow() {
    //init height and width 1/3 of the screen
    this->videoMode.height = (int) (sf::VideoMode::getDesktopMode().height * 0.45);
    this->videoMode.width = (int) (sf::VideoMode::getDesktopMode().width * 0.45);
    //this->videoMode.height = 600;
    //this->videoMode.width = 800;

    this->app = new sf::RenderWindow(this->videoMode, "Zombicide", sf::Style::Titlebar | sf::Style::Close);
    this->app->setFramerateLimit(60);
    
    this->app->setPosition(sf::Vector2i(sf::VideoMode::getDesktopMode().width / 2 - this->videoMode.width / 2, sf::VideoMode::getDesktopMode().height / 2 - this->videoMode.height / 2));

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

bool Game::isRunning() const{
    return this->app->isOpen();
}

//Methods

void Game::pollEvents() {
    while (this->app->pollEvent(this->event)) {

        switch (this->event.type) {
            case sf::Event::Closed:
                state = State::End;
                this->app->close();
                break;
            case sf::Event::KeyPressed:
                if (this->event.key.code == sf::Keyboard::Escape) {
                    state = State::End;
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
    //std::cout<<"Mouse position: " + std::to_string(sf::Mouse::getPosition(*this->app).x) + " " + std::to_string(sf::Mouse::getPosition(*this->app).y)<<std::endl;
    //update mouse position relative to the screen
    //std::cout<<"Mouse position: " + std::to_string(sf::Mouse::getPosition().x) + " " + std::to_string(sf::Mouse::getPosition().y)<<std::endl;

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


    this->app->display();
}

void Game::run() {
    while (this->isRunning()) {
        this->update();
        this->render();
    }
}

State Game::updateState() const {
    return state;
}




