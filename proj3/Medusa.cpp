#include <iostream>
#include "Medusa.hpp"

int Medusa::attack(){
    int att = 0;
    for (int c=0;c<attackDice[0];c++){
        att += rand() % attackDice[1] + 1;
    }
    if (att==12){
        att = 100;
    }
    return att;
}
Medusa::Medusa():Character(8,3){
    attackDice[0] = 2;
    attackDice[1] = 6;
    defenceDice[0] = 1;
    defenceDice[1] = 6;
    name = "Medusa";
}