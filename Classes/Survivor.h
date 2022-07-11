//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_SURVIVOR_H
#define ZOMBICIDE_SURVIVOR_H

#include "Character.h"
#include "Inventory.h"
#include <iostream>
#include <memory>
#include <SFML/Graphics/Texture.hpp>

enum class Players {
    Player1, Player2, Player3
};


class Survivor : public Character {
public:

    Survivor(Players player, sf::Vector2f position);

    ~Survivor() override;

    void search();

    void openDoor();

    void activate();

    void makeNoise();

private :
    Players player;
    std::unique_ptr<Inventory> inventory;
    std::unique_ptr<sf::Texture> texture;
    int nPlayer;
    int exp;

    bool noise;

};


#endif //ZOMBICIDE_SURVIVOR_H
