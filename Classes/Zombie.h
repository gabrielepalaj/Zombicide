//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_ZOMBIE_H
#define ZOMBICIDE_ZOMBIE_H

#include "Character.h"

enum class Zombies {
    walker, runner, fatty, abomination
};

class Zombie : public Character {

public:
    explicit Zombie(Zombies zombie);

    ~Zombie() override;

    int addMove();


};


#endif //ZOMBICIDE_ZOMBIE_H
