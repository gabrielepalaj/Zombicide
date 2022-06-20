//
// Created by gabriele on 17/06/22.
//

#ifndef ZOMBICIDE_CHARACTER_H
#define ZOMBICIDE_CHARACTER_H


class Character {
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
