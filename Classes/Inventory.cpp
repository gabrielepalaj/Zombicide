//
// Created by gabriele on 17/06/22.
//

#include "Inventory.h"

void Inventory::addCard() {

}

void Inventory::remove() {

}

bool Inventory::canOpenDoor() {
    Weapon *weapon;
    for (auto &card: cards) {
        weapon = dynamic_cast<Weapon *>(card.get());
        if (weapon != nullptr && weapon->canOpenDoor()) {
            return true;
        }
    }
    return false;
}


