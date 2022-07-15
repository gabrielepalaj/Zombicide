//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_INVENTORY_H
#define ZOMBICIDE_INVENTORY_H

#include "Card.h"
#include <vector>
#include <memory>


class Inventory {
public:

    void addCard();

    void remove();

    bool canOpenDoor();

private:
    std::vector<std::unique_ptr<Card>> cards;
};


#endif //ZOMBICIDE_INVENTORY_H
