//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_CHARACTER_H
#define ZOMBICIDE_CHARACTER_H


#include <SFML/Graphics/Sprite.hpp>


class Character : public sf::Sprite {

public:

    explicit Character(sf::Vector2f position);

    ~Character() override;

    const sf::Vector2f &getPosMap() const;

    virtual void move(sf::Vector2f position);

    virtual int attack(Character &character, int nWeapon) = 0;


protected:
    const int SCALE = 50;
    int movement;
    int action;
    int hp;
    sf::Vector2f posMap;

    void adjustPosition();

};


#endif //ZOMBICIDE_CHARACTER_H
