//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_SPAWNZOMBIE_H
#define ZOMBICIDE_SPAWNZOMBIE_H

#include <vector>
#include "Card.h"
#include "Zombie.h"

enum class SpawnLevel {
    EASY, MEDIUM, HARD
};

class SpawnZombie : Card {
    SpawnZombie(int zombie, int fatty, int runner, int abomination);

    std::vector<Zombie *> spawn(SpawnLevel level);

private:
    std::vector<SpawnLevel> spawnLevels;

    int walker;
    int fatty;
    int runner;
    int abomination;

};


#endif //ZOMBICIDE_SPAWNZOMBIE_H
