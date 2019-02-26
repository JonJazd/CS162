#include <iostream>
#include "BlueMen.hpp"

int BlueMen::takeDamage(int a, int b){
    if (a > b){
        int damage = a - b;
        health -= damage;
    }
    if (health<=8){
        defenceDice[0] = 2;
    }
    if (health<=4){
        defenceDice[0] = 1;
    }
    if (health<0){
        health = 0;
    }
    return health;
}
BlueMen::BlueMen():Character(12,3){
    attackDice[0] = 2;
    attackDice[1] = 10;
    defenceDice[0] = 3;
    defenceDice[1] = 6;
    name = "Blue Men";
}