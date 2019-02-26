#ifndef LoadedDie_HPP
#define LoadedDie_HPP
#include "Die.hpp"

class LoadedDie : public Die{
    public:
    LoadedDie(int);
    int roll();
};

#endif