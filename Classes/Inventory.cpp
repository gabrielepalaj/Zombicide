//
// Created by gabriele on 17/06/22.
//

#include "Inventory.h"

bool Inventory::addCard(std::unique_ptr<Card> card) {
    if (cards.size() < maxCards) {
        cards.push_back(std::move(card));
        return true;
    }
    return false;
}

bool Inventory::addCard(int nCard, std::unique_ptr<Card> card) {
    if (cards.size() < maxCards) {
        cards.insert(cards.begin() + nCard, std::move(card));
        return true;
    }
    return false;
}

bool Inventory::remove(int nCard) {
    if (nCard < cards.size()) {
        cards.erase(cards.begin() + nCard);
        for (int i = nCard; i < cards.size(); i++) {
            cards[i] = std::move(cards[i + 1]);
        }
        return true;
    }
    return false;
}

bool Inventory::isWeapon(int nWeapon) {
    if (nWeapon < cards.size()) {

        auto *weapon = dynamic_cast<Weapon *>(cards[nWeapon].get());
        if (weapon != nullptr) {
            return true;
        }
    }
    return false;
}

Weapon *Inventory::getWeapon(int nWeapon) const {
    if (nWeapon < cards.size()) {
        auto *weapon = dynamic_cast<Weapon *>(cards[nWeapon].get());
        if (weapon != nullptr) {
            return weapon;
        }
    }
    return nullptr;

}




