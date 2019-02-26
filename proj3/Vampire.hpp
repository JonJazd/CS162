#ifndef Vampire_HPP
#define Vampire_HPP
#include "Character.hpp"

class Vampire : public Character{
    public:
    int defence() override;
    Vampire();
};

#endif