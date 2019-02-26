#ifndef Universtiy_HPP
#define Universtiy_HPP
#include <string>
#include "Person.hpp"
#include "Student.hpp"
#include "Instructor.hpp"
#include "Building.hpp"
using std::string;

class University{
    private:
    string nameU;
    Building buildings[10];
    int numIns;
    int numStu;
    public:
    Person* people[10];
    int numBuildings;
    int numPeople;
    void printBuildings();
    void printPeople();
    void addPerson(string,double,string);
    void addBuilding(string,int,string);
    void del();
    University();
    ~University();
};

#endif