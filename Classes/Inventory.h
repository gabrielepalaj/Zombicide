//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_INVENTORY_H
#define ZOMBICIDE_INVENTORY_H

#include "Card.h"
#include <vector>
#include <iostream>
#include <memory>
#include "Weapon.h"


class Inventory {
public:

    bool addCard(Card *card);

    bool remove(int nCard);

    bool isWeapon(int nWeapon);

    Weapon *getWeapon(int nWeapon) const;

    //bool canOpenDoor(int nCard) const;

private:
    const int maxCards = 5;
    std::vector<Card *> cards;
};


#endif //ZOMBICIDE_INVENTORY_H
