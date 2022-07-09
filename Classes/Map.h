//
// Created by gabriele on 17/06/22.
//
#include <iostream>
#include <vector>
#include <memory>

#ifndef ZOMBICIDE_MAP_H
#define ZOMBICIDE_MAP_H

enum class Space {
    Door, Wall, Street, Empty
};

class Map {
    Space getSpace(int x, int y);

    void create();

private:
    std::vector<Space> map;
    int xMax;
    int yMax;

};


#endif //ZOMBICIDE_MAP_H
