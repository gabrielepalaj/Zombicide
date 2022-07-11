//
// Created by gabriele on 17/06/22.
//

#include "Survivor.h"

Survivor::Survivor(Players player, sf::Vector2f position) : Character(position) {
    this->player = player;
    this->inventory = std::make_unique<Inventory>();
    this->texture = std::make_unique<sf::Texture>();
    this->texture->loadFromFile("../Resources/Images/provaCT.jpg");
    this->setTexture(*this->texture);
    //set scale 1/20 of the window size
    this->setScale(0.03, 0.03);

    this->nPlayer = 0;
    this->exp = 0;
    this->noise = false;
}



void Survivor::search() {

}

void Survivor::openDoor() {

}

void Survivor::activate() {

}

void Survivor::makeNoise() {

}

Survivor::~Survivor() {

}


