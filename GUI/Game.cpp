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
    this->videoMode.height = (int) (sf::VideoMode::getDesktopMode().height * 0.7);
    this->videoMode.width = (int) (sf::VideoMode::getDesktopMode().width * 0.7);

    //set sprite background as background
    this->background = std::make_unique<sf::Sprite>();
    this->textureBackground = std::make_unique<sf::Texture>();
    textureBackground->loadFromFile("../assets/images/Game.png");
    this->background->setTexture(*this->textureBackground);
    this->background->setPosition(sf::Vector2f(0, 0));

    //set background scale relative to the window
    this->background->setScale(sf::Vector2f(this->videoMode.width / this->background->getGlobalBounds().width,
                                            this->videoMode.height / this->background->getGlobalBounds().height));


    this->app = std::make_unique<sf::RenderWindow>(this->videoMode, "Zombicide",
                                                   sf::Style::Titlebar | sf::Style::Close);
    this->app->setFramerateLimit(60);
    this->app->setPosition(sf::Vector2i(sf::VideoMode::getDesktopMode().width / 2 - this->videoMode.width / 2,
                                        sf::VideoMode::getDesktopMode().height / 2 - this->videoMode.height / 2));

}

void Game::initPlayers() {

    this->players.push_back(std::make_unique<Survivor>(Players::Player1, sf::Vector2f(START_X, START_Y)));
    this->players.push_back(std::make_unique<Survivor>(Players::Player2, sf::Vector2f(START_X, START_Y)));
    this->players.push_back(std::make_unique<Survivor>(Players::Player3, sf::Vector2f(START_X, START_Y)));

}

void Game::initMap() {
    this->map = std::make_unique<Map>(videoMode.width, videoMode.height);
}


void Game::initZombies() {

}


void Game::drawPlayers() {
    for (auto &player: this->players) {
        this->app->draw(*player);
    }
}

void Game::drawZombies() {
    for (auto &zombie: this->zombies) {
        this->app->draw(*zombie);
    }
}


//Constructors / destructors
Game::Game() {
    this->initVariables();
    this->initWindow();
    this->initMap();
    this->initPlayers();
}

Game::~Game() {

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
    //draw character and zombies
    this->app->draw(*this->background);
    this->drawPlayers();
    this->drawZombies();


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

std::vector<Character*> Game::getCharacters(sf::Vector2f position) const{
    std::vector<Character*> characters;
    for (auto &player: this->players) {
        if (player->getPosition() == position) {
            characters.push_back(player.get());
        }
    }
    for (auto &zombie: this->zombies) {
        if (zombie->getPosition() == position) {
            characters.push_back(zombie.get());
        }
    }
    return characters;

}

bool Game::isLegalMove(Character *ct, sf::Vector2f position) {
    //check if the position is Street or Room
    if (this->map->getSpace(position) != Space::Street && this->map->getSpace(position) != Space::Room) {
        return false;
    }
    //check if the position is in the map
    if (!this->map->existSpace(position)) {
        return false;
    }
    //check if the position is not next to the character
    //TODO


    //check if the position is not the same as the character
    if (ct->getPosition() == position) {
        return false;
    }
    return true;

}








