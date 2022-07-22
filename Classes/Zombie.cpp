//
// Created by gabriele on 17/06/22.
//

#include "Zombie.h"

Zombie::Zombie(sf::Vector2f position, ZombieType type) : Character(position) {
    this->type = type;
    this->posMap = sf::Vector2f(0, 0);
    init();
}


Zombie::~Zombie() {

}


int Zombie::addMove() {
    addedMoves++;
}

int Zombie::resetMove() {
    addedMoves = 0;
}

int Zombie::attack(Character &character, int nWeapon) {
    int damage = 0;


}

void Zombie::init() {
    addedMoves = 0;
    this->type = type;
    switch (type) {
        case ZombieType::WALKER:
            texture = std::make_unique<sf::Texture>();
            texture->loadFromFile("../assets/images/zombie_walker.png");
            setTexture(*texture);
            break;
        case ZombieType::RUNNER:
            texture = std::make_unique<sf::Texture>();
            texture->loadFromFile("../assets/images/zombie_runner.png");
            setTexture(*texture);
            break;
        case ZombieType::FATTY:
            texture = std::make_unique<sf::Texture>();
            texture->loadFromFile("../assets/images/zombie_fatty.png");
            setTexture(*texture);
            break;
        case ZombieType::ABOMINATION:
            texture = std::make_unique<sf::Texture>();
            texture->loadFromFile("../assets/images/zombie_abomination.png");
            setTexture(*texture);
            break;
    }
    this->texture = std::make_unique<sf::Texture>();
    this->texture->loadFromFile("../assets/images/Gioca.png");
    this->setTexture(*this->texture);
}




