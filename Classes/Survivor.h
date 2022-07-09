//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_SURVIVOR_H
#define ZOMBICIDE_SURVIVOR_H

#include "Character.h"
#include "Inventory.h"

enum class Players {
    Player1, Player2, Player3
};


class Survivor : public Character {
public:

    explicit Survivor(Players player);

    ~Survivor() override;

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
