#ifndef Character_HPP
#define Character_HPP
#include <iostream>
#include <string>
using std::string;

class Character{
    public:
    string name;
    int health;
    int armor;
    int attackDice[2];
    int defenceDice[2];
    virtual int attack();
    virtual int defence();
    virtual int takeDamage(int,int);
    virtual int getHealth();
    Character(int,int);
    virtual ~Character();
};

#endif