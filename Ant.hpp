#ifndef Ant_HPP
#define Ant_HPP
#include <string>
using std::string;

enum facing {UP=0,RIGHT=1,DOWN=2,LEFT=3};
class Ant{
    public:
    int loc1;
    int loc2;
    facing direction;
    void move(string**,int,int);
    int* getLoc();
    Ant(int,int);
};

#endif