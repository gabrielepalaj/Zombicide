//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_SURVIVOR_H
#define ZOMBICIDE_SURVIVOR_H

#include "Character.h"
#include "Inventory.h"
#include "Deck.h"
#include <iostream>
#include <memory>
#include <SFML/Graphics/Texture.hpp>

enum class PlayerType {
    Player1, Player2, Player3
};


class Survivor : public Character {
public:

    Survivor(PlayerType player, sf::Vector2f position);

    ~Survivor() override;

    void search(Deck deck);

    bool openDoor(int nCard) const;

    void makeNoise();

    void removeNoise();

    int attack(Character &character, int nWeapon) override;

    bool isNoise() const;
    bool addCard (int nCard, Card* c);

private :
    PlayerType player;
    std::unique_ptr<Inventory> inventory;
    std::unique_ptr<sf::Texture> texture;
    int exp;
    int nPLayer;

    bool noise;

};


#endif //ZOMBICIDE_SURVIVOR_H
