//
// Created by gabriele on 17/06/22.
//

#include "Character.h"


Character::Character(sf::Vector2f position) {
    move(position);
}

void Character::move(sf::Vector2f position) {
    this->position = position;
    this->adjustPosition();
}


int Character::attack() {
    return 0;
}

int Character::takeDamage() {
    return 0;
}

Character::~Character() {

}

void Character::adjustPosition() {
    this->setPosition(this->position.x * SCALE, this->position.y * SCALE);
}





