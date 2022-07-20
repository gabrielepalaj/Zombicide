//
// Created by gabriele on 17/06/22.
//

#include "Character.h"

Character::Character(sf::Vector2f position) {
    move(position);
}

Character::~Character() {

}

void Character::move(sf::Vector2f position) {
    this->position = position;
    this->adjustPosition();
}

void Character::adjustPosition() {
    this->setPosition(this->position.x * SCALE, this->position.y * SCALE);
}







