//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_SPAWNZOMBIE_H
#define ZOMBICIDE_SPAWNZOMBIE_H

#include <vector>
#include "Card.h"

enum class SpawnLevel {
    EASY, MEDIUM, HARD
};

class SpawnZombie : Card {
    void spawn();

private:
    std::vector<SpawnLevel> spawnLevels;

};


#endif //ZOMBICIDE_SPAWNZOMBIE_H
