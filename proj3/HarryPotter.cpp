#include <iostream>
#include "HarryPotter.hpp"
using std::cout;
using std::endl;

int HarryPotter::takeDamage(int a, int b){
    if (a>b){
        int damage = a - b;
        health -= damage;
    }
    if (health<1 && !abilityUsed){
        health = 20;
        cout << "HOGWARTS!!" << endl;
        abilityUsed = true;
    }
    if (health<0){
        health = 0;
    }
    return health;
}
HarryPotter::HarryPotter():Character(10,0){
    attackDice[0] = 2;
    attackDice[1] = 6;
    defenceDice[0] = 2;
    defenceDice[1] = 6;
    name = "Harry Potter";
}