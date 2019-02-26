#include <iostream>
#include "Barbarian.hpp"

Barbarian::Barbarian():Character(12,0){
    attackDice[0] = 2;
    attackDice[1] = 6;
    defenceDice[0] = 2;
    defenceDice[1] = 6;
    name = "Barbarian";
}