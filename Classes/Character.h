//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_CHARACTER_H
#define ZOMBICIDE_CHARACTER_H


#include <SFML/Graphics/Sprite.hpp>

class Character : public sf::Sprite {

public:

    Character();

    ~Character() override;

    virtual void move();

    virtual int attack();

    virtual int takeDamage();

protected:
    int movement;
    int action;
    int hp;
    int posX;
    int posY;

};


#endif //ZOMBICIDE_CHARACTER_H
