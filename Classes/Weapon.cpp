//
// Created by gabriele on 17/06/22.
//

#include "Weapon.h"

Weapon::Weapon(int damage, int range, int dice, int precision, bool noise, bool twoHanded, bool openDoor, bool ranged)
        : damage(damage), range(range), dice(dice), precision(precision), noise(noise), twoHanded(twoHanded),
          openDoor(openDoor), ranged(ranged) {

}

Weapon::~Weapon() {

}

int Weapon::getDamage() const {
    return damage;
}

int Weapon::getRange() const {
    return range;
}

int Weapon::getDice() const {
    return dice;
}

int Weapon::getPrecision() const {
    return precision;
}

bool Weapon::isNoise() const {
    return noise;
}

bool Weapon::isTwoHanded() const {
    return twoHanded;
}

bool Weapon::canOpenDoor() const {
    return openDoor;
}

bool Weapon::isRanged() const {
    return ranged;
}

bool Weapon::use() {
    int num = rand() % 12 + 1;
    return (num > precision);
}

