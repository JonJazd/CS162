#ifndef Animal_HPP
#define Animal_HPP
#include <string>
using std::string;

class Animal{
    public:
    int age;
    int cost;
    int baseFoodCost = 10;
    int payoff;
    int numberOfBabies;
    bool isAnimal;
    string type;
    Animal();
    void ageUp();
};

#endif