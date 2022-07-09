//
// Created by gabriele on 17/06/22.
//

#include "Map.h"


void Map::create() {

}

Space Map::getSpace(int x, int y) {
    return map.at(x * yMax + y);
}


