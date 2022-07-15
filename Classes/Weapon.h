//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_WEAPON_H
#define ZOMBICIDE_WEAPON_H
#include "Card.h"

class Weapon : public Card {

public:
    bool canOpenDoor() const;

    void use();

protected:
    int damage;
    int range;
    int dice;
    int precision;
    bool noise;
    bool twoHanded;
    bool openDoor;
};


#endif //ZOMBICIDE_WEAPON_H
