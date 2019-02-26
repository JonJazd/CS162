#include <iostream>
#include "Animal.hpp"
#include "Turtle.hpp"
#include <string>
using std::string;

Turtle::Turtle(){
    cost = 100;
    numberOfBabies = 10;
    payoff = 5;
    type = "Turtle";
    isAnimal = true;
}