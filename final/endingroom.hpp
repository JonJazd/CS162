#ifndef endingroom_HPP
#define endingroom_HPP
#include "Space.hpp"

class endingroom : public Space{
    public:
    endingroom();
    void examine() override;
    void display() override;
    void showDirections() override;
    void action() override;
};
#endif