//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_WEAPON_H
#define ZOMBICIDE_WEAPON_H
#include "Card.h"
#include <cstdlib>

class Weapon : public Card {

public:
    bool canOpenDoor() const;

    bool use();

    int getDamage() const;

    int getRange() const;

    int getDice() const;

    int getPrecision() const;

    bool isNoise() const;

    bool isTwoHanded() const;

    bool isOpenDoor() const;

    bool isRanged() const;

protected:
    int damage;
    int range;
    int dice;
    int precision;
    bool noise;
    bool twoHanded;
    bool openDoor;
    bool ranged;
};


#endif //ZOMBICIDE_WEAPON_H
