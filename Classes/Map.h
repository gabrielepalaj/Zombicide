//
// Created by gabriele on 17/06/22.
//
#include <iostream>
#include <vector>
#include <memory>
#include "Character.h"

#ifndef ZOMBICIDE_MAP_H
#define ZOMBICIDE_MAP_H

enum class Space {
    Wall, Street, Room, Empty
};

class Map {


private:
    void create();

    std::vector<Space> map;
    float xMax;
    float yMax;

public:
    Map(float x, float y);

    Space getSpace(sf::Vector2f position);

    bool existSpace(sf::Vector2f position);

};


#endif //ZOMBICIDE_MAP_H
