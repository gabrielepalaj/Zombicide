//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_DECK_H
#define ZOMBICIDE_DECK_H

#include "Card.h"
#include <vector>
#include <memory>
#include <iostream>


class Deck {
    void draw();

    void add();

private:
    std::vector<std::unique_ptr<Card>> cards;
};


#endif //ZOMBICIDE_DECK_H
