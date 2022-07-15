//
// Created by gabriele on 17/06/22.
//

#include "Inventory.h"

bool Inventory::addCard(Card *card) {
    if (cards.size() < maxCards) {
        cards.push_back(card);
        return true;
    }
    return false;
}


bool Inventory::remove(int n) {
    if (n < cards.size()) {
        cards.erase(cards.begin() + n);
        for (int i = n; i < cards.size(); i++) {
            cards[i] = cards[i + 1];
        }
        return true;
    }
    return false;
}

bool Inventory::canOpenDoor() {
    Weapon *weapon;
    for (auto &card: cards) {
        weapon = dynamic_cast<Weapon *>(card);
        if (weapon != nullptr && weapon->canOpenDoor()) {
            return true;
        }
    }
    return false;
}


