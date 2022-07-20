//
// Created by gabriele on 17/06/22.
//

#include "Survivor.h"

Survivor::Survivor(Players player, sf::Vector2f position) : Character(position) {
    this->player = player;
    this->inventory = std::make_unique<Inventory>();
    this->texture = std::make_unique<sf::Texture>();
    this->texture->loadFromFile("../assets/images/provaCT.jpg");
    this->setTexture(*this->texture);

    this->setScale(0.03, 0.03);

    this->nPLayer = 0;
    this->exp = 0;
    this->noise = false;
}

Survivor::~Survivor() {

}


void Survivor::search(Deck deck) {
    //pesca una carta dal mazzo
}

bool Survivor::openDoor(int nCard) const {
    Weapon *weapon = inventory->getWeapon(nCard);
    return weapon->canOpenDoor();
}

void Survivor::makeNoise() {
    this->noise = true;
}

void Survivor::removeNoise() {
    this->noise = false;
}


int Survivor::attack(Character &character, int nWeapon) {
    int damage = 0;
    if (inventory->isWeapon(nWeapon)) {
        damage = inventory->getWeapon(nWeapon)->getDamage();
    }
}

bool Survivor::isNoise() const {
    return noise;
}


