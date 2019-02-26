#ifndef problemRoom_HPP
#define problemRoom_HPP
#include <string>
#include "Space.hpp"
using std::string;

class problemRoom : public Space{
    public:
    string problem;
    int answer;
    bool solved;
    bool giveKey;
    bool endRoom;
    void examine() override;
    void display() override;
    void action() override;
    string generateProblem(int);
    int answerIt(int);
    void showDirections() override;
    void setEndRoom();
    void setGiveKey();
    problemRoom(int);
};
#endif