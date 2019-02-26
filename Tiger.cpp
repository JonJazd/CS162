#include <iostream>
#include "Animal.hpp"
#include "Tiger.hpp"
#include <string>
using std::string;

Tiger::Tiger(){
    cost = 10000;
    numberOfBabies = 1;
    payoff = 20;
    type = "Tiger";
    isAnimal = true;
}