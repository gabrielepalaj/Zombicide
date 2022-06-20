//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_SURVIVOR_H
#define ZOMBICIDE_SURVIVOR_H

#include "Character.h"
#include "Inventory.h"


class Survivor : public Character {
    void search();

    void openDoor();

    void activate();

    void makeNoise();

private :
    int nPlayer;
    int exp;
    // Inventory : inventory;
    bool noise;

};


#endif //ZOMBICIDE_SURVIVOR_H
