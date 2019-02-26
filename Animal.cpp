#include <iostream>
#include "Animal.hpp"

Animal::Animal(){
    age = 0;
}
void Animal::ageUp(){
    age += 1;
}