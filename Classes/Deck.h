//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_DECK_H
#define ZOMBICIDE_DECK_H
#include "Card.h"


class Deck {
    void draw();

    void add();

private:
    Card card[];

};


#endif //ZOMBICIDE_DECK_H
