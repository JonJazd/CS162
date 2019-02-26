#include <iostream>
#include "Animal.hpp"
#include "Penguin.hpp"
#include <string>
using std::string;

Penguin::Penguin(){
    cost = 1000;
    numberOfBabies = 5;
    payoff = 10;
    type = "Penguin";
    isAnimal = true;
}