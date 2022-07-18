//
// Created by gabriele on 17/06/22.
//

#include "Zombie.h"

Zombie::Zombie(Zombies zombie, sf::Vector2f position) : Character(position) {

    addedMoves = 0;
    this->zombie = zombie;
    switch (zombie) {
        case Zombies::walker:
            texture = std::make_unique<sf::Texture>();
            texture->loadFromFile("../assets/images/zombie_walker.png");
            setTexture(*texture);
            break;
        case Zombies::runner:
            texture = std::make_unique<sf::Texture>();
            texture->loadFromFile("../assets/images/zombie_runner.png");
            setTexture(*texture);
            break;
        case Zombies::fatty:
            texture = std::make_unique<sf::Texture>();
            texture->loadFromFile("../assets/images/zombie_fatty.png");
            setTexture(*texture);
            break;
        case Zombies::abomination:
            texture = std::make_unique<sf::Texture>();
            texture->loadFromFile("../assets/images/zombie_abomination.png");
            setTexture(*texture);
            break;
    }
    this->texture = std::make_unique<sf::Texture>();
    this->texture->loadFromFile("../assets/images/Gioca.png");
    this->setTexture(*this->texture);

}



Zombie::~Zombie() {

}


int Zombie::addMove() {
    addedMoves++;
}

int Zombie::attack(Character &character, int nWeapon) {
    int damage = 0;


}



