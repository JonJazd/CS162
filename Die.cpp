#include <iostream>
#include <cstdlib>
#include "Die.hpp"

int sides;

Die::Die(int a){
    sides = a;
}
int Die::roll(){
    return rand() % sides + 1;
}