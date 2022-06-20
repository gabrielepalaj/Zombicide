//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_WEAPON_H
#define ZOMBICIDE_WEAPON_H
#include "Card.h"

class Weapon : public Card {
    void use();

protected:
    int damage;
    int range;
    int dice;
    int precision;
    bool noise;
    bool doubleWeapon;
};


#endif //ZOMBICIDE_WEAPON_H
