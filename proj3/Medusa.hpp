#ifndef Medusa_HPP
#define Medusa_HPP
#include "Character.hpp"

class Medusa : public Character{
    public:
    int attack() override;
    Medusa();
};
#endif