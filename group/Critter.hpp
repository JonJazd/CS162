#ifndef Critter_HPP
#define Critter_HPP

class Critter{
    public:
    int moveSinceLastBreed;
    int breedNumber;
    int row;
    int col;
    virtual int* move();
    virtual int* breed();
    virtual void die();
    Critter();
};

#endif