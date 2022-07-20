//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_ZOMBIE_H
#define ZOMBICIDE_ZOMBIE_H

#include "Character.h"
#include <iostream>
#include <memory>
#include <SFML/Graphics/Texture.hpp>

enum class ZombieType {
    WALKER, RUNNER, FATTY, ABOMINATION
};

class Zombie : public Character {

public:
    Zombie(sf::Vector2f position, ZombieType type);

    Zombie(ZombieType zombie, sf::Vector2f position);

    ~Zombie() override;

    int addMove();

    int attack(Character &character, int nWeapon);

    int resetMove();

private:

    int addedMoves;
    ZombieType type;
    std::unique_ptr<sf::Texture> texture;

    void init();


};


#endif //ZOMBICIDE_ZOMBIE_H
