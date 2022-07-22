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
    this->posMap = position;
    this->adjustPosition();
}

void Character::adjustPosition() {
    this->setPosition(this->posMap.x * SCALE, this->posMap.y * SCALE);
}

const sf::Vector2f &Character::getPosMap() const {
    return posMap;
}







