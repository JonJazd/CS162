#ifndef doorRoom_HPP
#define doorRoom_HPP
#include "Space.hpp"

class doorRoom: public Space{
    public:
    bool locked;
    char doorSide;
    void unlock(int);
    void examine() override;
    void display() override;
    void showDirections() override;
    void action() override;
    doorRoom();
};
#endif