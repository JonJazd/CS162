#include <iostream>
#include "Vampire.hpp"
#include <cstdlib>

int Vampire::defence(){
    int charm = rand() % 2;
    if (charm==0){
        int def = 0;
        for (int a=0;a<defenceDice[0];a++){
            def += rand() % defenceDice[1] + 1;
        }
        return def+armor;
    } else {
        return 999;
    }
}
Vampire::Vampire() : Character(18,1){
    attackDice[0] = 1;
    attackDice[1] = 12;
    defenceDice[0] = 1;
    defenceDice[1] = 6;
    name = "Vampire";
}