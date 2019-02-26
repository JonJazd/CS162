#include <iostream>
#include "Person.hpp"
#include "Building.hpp"
#include "menu.hpp"
#include "University.hpp"
#include "Student.hpp"
#include "Instructor.hpp"
#include <string>

using std::string;
using std::cout;
using std::endl;

int main(){
    int whileChoice = 1;
    University OSU;
    OSU.addBuilding("Bexell",250,"One OSU dr.");
    OSU.addBuilding("Rodgers",125,"Two OSU dr.");
    OSU.addPerson("Dr. Hawking",5.0,"i");
    OSU.addPerson("Mr. Anderson",2.9,"s");
    menu men;
    while (whileChoice==1){
        int choice1 = men.start();
        if (choice1==0 || choice1==404){
            return 0;
        } else if (choice1 ==1){
            OSU.printBuildings();
        } else if (choice1==2){
            OSU.printPeople();
        } else if (choice1==3){
            int choice2 = men.workPerson(OSU);
            if (choice2 == -1){
                OSU.del();
                return 0;
            } else {
                Person* pPtr = OSU.people[choice2];
                pPtr->do_work();
            }
        }
    }
}