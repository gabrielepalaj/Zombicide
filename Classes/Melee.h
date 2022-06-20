//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_MELEE_H
#define ZOMBICIDE_MELEE_H
#include "Weapon.h"

class Melee : public Weapon {
    void open();

    void use();


protected:
    bool openDoor;

};


#endif //ZOMBICIDE_MELEE_H
