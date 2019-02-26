#include <iostream>
#include "Character.hpp"
#include <cstdlib>

int Character::attack(){
    int att = 0;
    for (int c=0;c<attackDice[0];c++){
        att += rand() % attackDice[1] + 1;
    }
    return att;
}
int Character::defence(){
    int def = 0;
    for (int d=0;d<defenceDice[0];d++){
        def += rand() % defenceDice[1] + 1;
    }
    return def+armor;
}
int Character::takeDamage(int i, int k){
    if (i>k){
        int damage = i - k;
        health -= damage;
    }
    if (health<0){
        health = 0;
    }
    return health;
}
int Character::getHealth(){
    return health;
}
Character::Character(int a,int b){
    health = a;
    armor = b;
}
Character::~Character(){
    delete this;
}