//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_ZOMBIE_H
#define ZOMBICIDE_ZOMBIE_H

#include "Character.h"
#include <iostream>
#include <memory>
#include <SFML/Graphics/Texture.hpp>

enum class Zombies {
    walker, runner, fatty, abomination
};

class Zombie : public Character {

public:
    Zombie(Zombies zombie, sf::Vector2f position);

    ~Zombie() override;

    int addMove();

private:
    Zombies zombie;
    std::unique_ptr<sf::Texture> texture;


};


#endif //ZOMBICIDE_ZOMBIE_H
