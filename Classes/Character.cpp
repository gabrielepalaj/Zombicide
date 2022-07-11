//
// Created by gabriele on 17/06/22.
//

#include "Character.h"


Character::Character(sf::Vector2f position) {
    this->posX = position.x;
    this->posY = position.y;
    this->setPosition(sf::Vector2f(this->posX * SCALE, this->posY * SCALE));

}

void Character::move(sf::Vector2f position) {
    this->posX = position.x;
    this->posY = position.y;
    this->setPosition(sf::Vector2f(this->posX * SCALE, this->posY * SCALE));
}


int Character::attack() {
    return 0;
}

int Character::takeDamage() {
    return 0;
}

Character::~Character() {

}





