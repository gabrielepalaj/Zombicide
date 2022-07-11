//
// Created by gabriele on 17/06/22.
//

#include "Map.h"


void Map::create() {

}

Space Map::getSpace(sf::Vector2f position) {
    return map.at(position.x * yMax + position.y);
}

Map::Map(float x, float y) {

}

bool Map::existSpace(sf::Vector2f position) {
    if (position.x < 0 || position.x >= xMax || position.y < 0 || position.y >= yMax)
        return false;
    return true;
}



