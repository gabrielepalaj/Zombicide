//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_INVENTORY_H
#define ZOMBICIDE_INVENTORY_H
#include "Card.h"


class Inventory {
    void addCard();

    void remove();

private:
    Card cards[];
};


#endif //ZOMBICIDE_INVENTORY_H
