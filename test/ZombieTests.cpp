//
// Created by Nik Cinigiani on 22/07/22.
//
#include "gtest/gtest.h"
#include "../Classes/Zombie.h"
#include <SFML/Graphics/Texture.hpp>
#include <iostream>


TEST(Zombie, Constructor){
    Zombie zombie(sf::Vector2f(0,0), ZombieType::WALKER);
    ASSERT_EQ(zombie.getPosMap(), sf::Vector2f(0,0));
    ASSERT_EQ(zombie.getPosition(), sf::Vector2f(0,0));
}

TEST(Zombie, Move){
    Zombie zombie(sf::Vector2f(0,0), ZombieType::WALKER);
    zombie.move(sf::Vector2f(1,1));
    ASSERT_EQ(zombie.getPosMap(), sf::Vector2f(1,1));
    ASSERT_EQ(zombie.getPosition(), sf::Vector2f(1 * Character::SCALE,1*Character::SCALE));
}

