#ifndef entrance_HPP
#define entrance_HPP
#include "Space.hpp"

class entrance:public Space{
    public:
    entrance();
    void examine() override;
    void showDirections() override;
    void action() override;
    void display() override;
};
#endif