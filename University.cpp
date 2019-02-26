#include <iostream>
#include "University.hpp"
#include <string>
#include "Person.hpp"
#include "Student.hpp"
#include "Instructor.hpp"
#include "Building.hpp"

using std::string;
using std::cout;
using std::endl;

string nameU;
Building buildings[10];
Person* people[10];
int numIns = 0;
int numStu= 0;
Building* b;
int numBuildings;
int numPeople;

//constructor
University::University(){
    nameU = "Oregon State University";
    numBuildings = 0;
    numPeople = 0;
}
//prints out each building (name, size and address) followed by a blank line if it is not the last building.
void University::printBuildings(){
    for (int a=0;a<numBuildings;a++){
        string nameB = buildings[a].getName();
        int sizeB = buildings[a].getSize();
        string addressB = buildings[a].getAddress();
        cout << "Name : " << nameB << endl;
        cout << "Size : " << sizeB << endl;
        cout << "Address : " << addressB << endl;
        if (a!=numBuildings-1){
            cout << endl;
        }
    }
}
//prints out each person (name, age and GPA/rating)
void University::printPeople(){
    for (int a=0;a<numPeople;a++){
        Person* peoplePtr = people[a];
        string nameP1 = peoplePtr->getName();
        int ageP = peoplePtr->getAge();
        cout << "Name : " << nameP1 << endl;
        cout << "Age : " << ageP << endl;
        //cout << peoplePtr << endl;
        if (people[a]->getGPA()!=-0.2){
            double GPAS = people[a]->getGPA();
            cout << "GPA : " << GPAS << endl; 
        }  else {
            double ratingI = people[a]->getRating();
            cout << "Rating: " << ratingI << endl;
        }
    }
}
//adds a person to the people array based on if they are a student or an instructor
void University::addPerson(string b,double c,string d){
    if (d=="s"){
        people[numPeople] = new Student (b,c);
        numPeople += 1;
        numStu +=1;
        cout << "added " << b << endl;
    } else if (d=="i"){
        people[numPeople] = new Instructor(b,c);
        numPeople += 1;
        numIns += 1;
        cout << "added " << b << endl;
    }
}
//adds a building to the building array
void University::addBuilding(string e,int f, string g){
    Building build(e,f,g);
    buildings[numBuildings] = build;
    numBuildings += 1;
    b = buildings;
}
//deletes all students
void University::del(){
    for (int z=0;z<numPeople;z++){
        delete[] people[numPeople];
    }
}
//deconstructor
University::~University(){
}