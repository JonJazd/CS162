#include <iostream>
#include <cstdlib>
#include "Die.hpp"
#include "LoadedDie.hpp"

LoadedDie::LoadedDie(int b) : Die(2){
    sides = b;
}

int LoadedDie::roll(){
    //returns either the max a die can roll or max-1. For 2 sided dice just returns 2.
    if (sides==2){
        return 2;
    }
    return rand() % 2 + sides-1;
}