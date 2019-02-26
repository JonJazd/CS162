#ifndef corridor_HPP
#define corridor_HPP
#include "Space.hpp"

class corridor : public Space{
    public:
    corridor();
    void examine() override;
    void display() override;
    void showDirections() override;
    void action() override;
};
#endif