#ifndef HarryPotter_HPP
#define HarryPotter_HPP
#include "Character.hpp"

class HarryPotter : public Character{
    public:
    int takeDamage(int,int) override;
    bool abilityUsed = false;
    HarryPotter();
};
#endif