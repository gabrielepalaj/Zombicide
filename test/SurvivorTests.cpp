//
// Created by Nik Cinigiani on 22/07/22.
//
#include "gtest/gtest.h"
#include "../Classes/Survivor.h"
#include <SFML/Graphics.hpp>


TEST(Survivor, Constructor){
    Survivor survivor(PlayerType::Player1, sf::Vector2f(0,0));
    EXPECT_EQ(survivor.getPosition(), sf::Vector2f(0,0));
}

TEST(Survivor, Move){
    Survivor survivor(PlayerType::Player1, sf::Vector2f(0,0));
    survivor.move(sf::Vector2f(1,1));
    ASSERT_EQ(survivor.getPosition(), sf::Vector2f(1,1));
}

TEST(Survivor, makeNoise){
    Survivor survivor(PlayerType::Player1, sf::Vector2f(0,0));
    survivor.makeNoise();
    ASSERT_TRUE(survivor.isNoise());
}

TEST(Survivor, removeNoise){
    Survivor survivor(PlayerType::Player1, sf::Vector2f(0,0));
    survivor.makeNoise();
    survivor.removeNoise();
    ASSERT_FALSE(survivor.isNoise());
}

