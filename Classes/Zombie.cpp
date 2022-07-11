//
// Created by gabriele on 17/06/22.
//

#include "Zombie.h"

Zombie::Zombie(Zombies zombie, sf::Vector2f position) : Character(position) {

    this->texture = std::make_unique<sf::Texture>();
    this->texture->loadFromFile("../Resources/Images/Gioca.png");
    this->setTexture(*this->texture);

}



Zombie::~Zombie() {

}


int Zombie::addMove() {
    return 0;
}



