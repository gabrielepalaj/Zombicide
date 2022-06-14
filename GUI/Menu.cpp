//
// Created by gabriele on 14/06/22.
//

#include "Menu.h"

//private methods
void Menu::initVariables() {
    this->app = nullptr;

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

void Menu::update() {
    this->pollEvents();

    //update mouse position relative to the window
    //std::cout<<"Mouse position: " + std::to_string(sf::Mouse::getPosition(*this->app).x) + " " + std::to_string(sf::Mouse::getPosition(*this->app).y)<<std::endl;
    //update mouse position relative to the screen
    //std::cout<<"Mouse position: " + std::to_string(sf::Mouse::getPosition().x) + " " + std::to_string(sf::Mouse::getPosition().y)<<std::endl;

    //update enemy position relative to the mouse position
    //this->enemy.setPosition(sf::Mouse::getPosition(*this->app).x-(enemy.getSize().x/2), sf::Mouse::getPosition(*this->app).y -(enemy.getSize().y/2));


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
    //Prova di scrittura menù, DA CAMBIARE
    sf::Texture texture;
    texture.loadFromFile("../Resources/Images/Menu.png");
    sf::Sprite sprite(texture);
    sprite.setPosition(0, 0);
    sprite.setScale(1.0f, 1.0f);
    this->app->setView(sf::View(sf::FloatRect(0, 0, sprite.getGlobalBounds().width, sprite.getGlobalBounds().height)));
    this->app->draw(sprite);

    //draw button Gioca (play) with image ../Resources/Images/Gioca.png
    sf::Texture texturePlay;
    texturePlay.loadFromFile("../Resources/Images/Gioca.png");
    sf::Sprite spritePlay(texturePlay);
    spritePlay.setPosition(this->app->getSize().x / 2 - spritePlay.getGlobalBounds().width / 2, (this->app->getSize().y / 2 - spritePlay.getGlobalBounds().height / 2) + 50);
    spritePlay.setScale(1.0f, 1.0f);
    this->app->draw(spritePlay);



    this->app->display();
}

void Menu::run() {



    while (this->isRunning()) {
        this->update();
        this->render();
    }
}
