#ifndef BlueMen_HPP
#define BlueMen_HPP
#include "Character.hpp"

class BlueMen : public Character{
    public:
    int takeDamage(int,int) override;
    BlueMen();
};

#endif