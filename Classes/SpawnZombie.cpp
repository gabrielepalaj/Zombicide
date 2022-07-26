//
// Created by gabriele on 17/06/22.
//

#include "SpawnZombie.h"
#include "Zombie.h"

SpawnZombie::SpawnZombie(int zombie, int fatty, int runner, int abomination) : walker(zombie), fatty(fatty),
                                                                               runner(runner),
                                                                               abomination(abomination) {

}

std::vector<std::unique_ptr<Zombie>> SpawnZombie::spawn(SpawnLevel level) {
    std::vector<std::unique_ptr<Zombie>> zombies;
    int mult;
    switch (level) {
        case SpawnLevel::EASY:
            mult = 1;
            break;
        case SpawnLevel::MEDIUM:
            mult = 2;
            break;
        case SpawnLevel::HARD:
            mult = 3;
            break;
    }
    //create vector relative to mult
    for (int i = 0; i < walker * mult; i++) {
        zombies.push_back(std::make_unique<Zombie>(sf::Vector2f(), ZombieType::WALKER));
    }
    for (int i = 0; i < fatty * mult; i++) {
        zombies.push_back(std::make_unique<Zombie>(sf::Vector2f(), ZombieType::FATTY));
    }
    for (int i = 0; i < runner * mult; i++) {
        zombies.push_back(std::make_unique<Zombie>(sf::Vector2f(), ZombieType::RUNNER));
    }
    for (int i = 0; i < abomination; i++) {
        zombies.push_back(std::make_unique<Zombie>(sf::Vector2f(), ZombieType::ABOMINATION));
    }

    return zombies;
}

SpawnZombie::SpawnZombie(SpawnLevel level) {

}

SpawnZombie::~SpawnZombie() {

}

bool SpawnZombie::use() {
    return false;
}

