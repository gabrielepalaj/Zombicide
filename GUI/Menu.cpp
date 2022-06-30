//
// Created by gabriele on 14/06/22.
//

#include "Menu.h"
#include "Game.h"

//private methods
void Menu::initVariables() {
    this->app = nullptr;
    state = State::Menu;

}

void Menu::initWindow() {
    //init height and width 1/3 of the screen
    this->videoMode.width = 800;
    this->videoMode.height = 600;

    this->app = new sf::RenderWindow(this->videoMode, "Zombicide", sf::Style::Titlebar | sf::Style::Close);
    this->app->setFramerateLimit(60);

    this->app->setPosition(sf::Vector2i(sf::VideoMode::getDesktopMode().width / 2 - this->videoMode.width / 2, sf::VideoMode::getDesktopMode().height / 2 - this->videoMode.height / 2));

}


//Constructors / destructors
Menu::Menu() {
    this->initVariables();
    this->initWindow();

}

Menu::~Menu() {
    delete this->app;
}

//Accessors

bool Menu::isRunning() const{
    return this->app->isOpen();
}

//Methods

void Menu::pollEvents() {
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
                if (this->event.key.code == sf::Keyboard::Enter) {
                    state = State::Game;
                    this->app->close();
                }
                break;
            default:
                break;
        }

    }
}

void Menu::update() {
    this->pollEvents();

    //update mouse position relative to the window
    //std::cout<<"Mouse position: " + std::to_string(sf::Mouse::getPosition(*this->app).x) + " " + std::to_string(sf::Mouse::getPosition(*this->app).y)<<std::endl;
    //update mouse position relative to the screen
    //std::cout<<"Mouse position: " + std::to_string(sf::Mouse::getPosition().x) + " " + std::to_string(sf::Mouse::getPosition().y)<<std::endl;

    //update enemy position relative to the mouse position
    //this->enemy.setPosition(sf::Mouse::getPosition(*this->app).x-(enemy.getSize().x/2), sf::Mouse::getPosition(*this->app).y -(enemy.getSize().y/2));

    /*
    //when mouse over Gioca button -> make it bigger
    if (sf::Mouse::getPosition(*this->app).x > this->play.getPosition().x && sf::Mouse::getPosition(*this->app).x < this->play.getPosition().x + this->play.getGlobalBounds().width &&
        sf::Mouse::getPosition(*this->app).y > this->play.getPosition().y && sf::Mouse::getPosition(*this->app).y < this->play.getPosition().y + this->play.getGlobalBounds().height) {
        this->play.setScale(1.2, 1.2);
    } else {
        this->play.setScale(1, 1);
    }
    */

}

void Menu::render() {
    /*
     * @return void
     *
     * - clear old frame
     * - render objects
     * - display new frame
     *
     * Render the Menu.
     */
    this->app->clear();

    //Draw Menu here

    this->app->draw(this->play);
    this->app->draw(this->options);
    this->app->draw(this->exit);



    this->app->display();
}

void Menu::run() {
    Game *game;

    while (state != State::End) {
        while (this->isRunning() && state == State::Menu) {
            this->update();
            this->render();
        }
        if (state == State::Game) {
            game = new Game();
        }
        while (game->isRunning() && state == State::Game) {
            game->update();
            game->render();
            state = game->updateState();
        }
    }


}
