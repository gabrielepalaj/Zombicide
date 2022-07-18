//
// Created by gabriele on 14/06/22.
//

#include "Menu.h"

#include <memory>
#include "Game.h"

//private methods
void Menu::initVariables() {
    this->app = nullptr;
    state = State::Menu;
}

void Menu::initWindow() {
    //init height and width 1/3 of the screen
    this->videoMode.width = (int) (sf::VideoMode::getDesktopMode().width * 0.5);
    this->videoMode.height = (int) (sf::VideoMode::getDesktopMode().height * 0.55);

    //set sprite background as background
    this->background = std::make_unique<sf::Sprite>();
    textureBackground = std::make_unique<sf::Texture>();
    textureBackground->loadFromFile("../assets/images/Menu.png");
    this->background->setTexture(*this->textureBackground);
    this->background->setPosition(sf::Vector2f(0, 0));

    //set background scale relative to the window
    this->background->setScale(sf::Vector2f(this->videoMode.width / this->background->getGlobalBounds().width,
                                            this->videoMode.height / this->background->getGlobalBounds().height));

    this->app = std::make_unique<sf::RenderWindow>(this->videoMode, "Zombicide",
                                                   sf::Style::Close | sf::Style::Titlebar);
    this->app->setFramerateLimit(60);
    this->app->setPosition(sf::Vector2i(sf::VideoMode::getDesktopMode().width / 2 - this->videoMode.width / 2,
                                        sf::VideoMode::getDesktopMode().height / 2 - this->videoMode.height / 2));

}


void Menu::initButtons() {

    //Initialize
    this->buttonPlay = std::make_unique<sf::Sprite>();
    this->buttonExit = std::make_unique<sf::Sprite>();

    //create texture for buttons
    texturePlay = std::make_unique<sf::Texture>();
    textureExit = std::make_unique<sf::Texture>();

    texturePlay->loadFromFile("../assets/images/Gioca.png");
    textureExit->loadFromFile("../assets/images/Esci.png");

    //set texture for buttons
    this->buttonPlay->setTexture(*this->texturePlay);
    this->buttonExit->setTexture(*this->textureExit);

    //set buttons positions
    this->buttonPlay->setPosition(
            sf::Vector2f(this->app->getSize().x / 2 - this->buttonPlay->getGlobalBounds().width / 2,
                         this->app->getSize().y / 2 - this->buttonPlay->getGlobalBounds().height / 2 + 50));
    this->buttonExit->setPosition(
            sf::Vector2f(this->app->getSize().x / 2 - this->buttonExit->getGlobalBounds().width / 2,
                         this->app->getSize().y / 2 + this->buttonExit->getGlobalBounds().height / 2 + 50));

    //set scale relative to the window, the buttons are 0.2 of the window size
    this->buttonPlay->setScale(sf::Vector2f(this->videoMode.width / this->buttonPlay->getGlobalBounds().width * 0.3,
                                            this->videoMode.height / this->buttonPlay->getGlobalBounds().height * 0.2));
    this->buttonExit->setScale(sf::Vector2f(this->videoMode.width / this->buttonExit->getGlobalBounds().width * 0.2,
                                            this->videoMode.height / this->buttonExit->getGlobalBounds().height * 0.2));

}


//Constructors / destructors
Menu::Menu() {
    this->initVariables();
    this->initWindow();
    this->initButtons();

}

Menu::~Menu() {

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
            case sf::Event::MouseButtonPressed:
                if (this->event.mouseButton.button == sf::Mouse::Left) {
                    if (this->buttonPlay->getGlobalBounds().contains(
                            this->app->mapPixelToCoords(sf::Mouse::getPosition(*this->app)))) {
                        state = State::Game;
                        this->app->close();
                    }
                    if (this->buttonExit->getGlobalBounds().contains(
                            this->app->mapPixelToCoords(sf::Mouse::getPosition(*this->app)))) {
                        state = State::End;
                        this->app->close();
                    }
                }
                break;
            default:
                break;
        }

    }
}

void Menu::update() {
    this->pollEvents();



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

    //draw menu here

    this->app->draw(*(this->background));
    this->app->draw(*(this->buttonPlay));
    this->app->draw(*(this->buttonExit));


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

