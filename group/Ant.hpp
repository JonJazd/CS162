#ifndef Ant_HPP
#define Ant_HPP
#include "Critter.hpp"

class Ant: public Critter{
    public:
    virtual int* move();
    virtual int* breed();
    virtual void die();
    Ant();
};

#endif