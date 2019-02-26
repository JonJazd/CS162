#ifndef Doodlebug_HPP
#define Doodlebug_HPP
#include "Critter.hpp"

class Doodlebug: public Critter{
    public:
    int movesSinceLastEat;
    int starveNumber;
    virtual int* move();
    virtual int* breed();
    virtual void die();
    Doodlebug();
};

#endif