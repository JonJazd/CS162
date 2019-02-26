#ifndef menu_HPP
#define menu_HPP
#include <string>
using std::string;

class menu{
    public:
    string option2;
    string option1;
    string option3;
    string option4;
    string option5;
    int numOpt;
    int* start();
    int info();
};

#endif