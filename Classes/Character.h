//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_CHARACTER_H
#define ZOMBICIDE_CHARACTER_H

//scala di differenza tra la posizione nella mappa e la posizione in pixel
#define SCALE 50

#include <SFML/Graphics/Sprite.hpp>

class Character : public sf::Sprite {

public:

    explicit Character(sf::Vector2f position);

    ~Character() override;

    virtual void move(sf::Vector2f position);

    virtual int attack();

    virtual int takeDamage();

protected:
    int movement;
    int action;
    int hp;
    float posX;
    float posY;

};


#endif //ZOMBICIDE_CHARACTER_H
