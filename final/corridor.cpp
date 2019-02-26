#include <iostream>
#include "corridor.hpp"
#include <string>

using std::string;
using std::cout;
using std::endl;

corridor::corridor():Space(){
    entryLine = "You have not examined this room yet.";
}
void corridor::examine(){
    entryLine = "There's nothing in this room.";
    enter();
    examined = true;
}
void corridor::display(){
    cout << "" << endl;
}
void corridor::showDirections(){
    if (examined){
        if (n!=nullptr){
            cout << "Press n to go through the doorway to the north. ";
        }
        if (s!=nullptr){
            cout << "Press s to go through the doorway to the south. ";
        } 
        if (e!=nullptr){
            cout << "Press e to go through the doorway to the east. ";
        }
        if (w!=nullptr){
            cout << "Press w to go through the doorway to the west. ";
        }
        cout << endl;
    }
    
}
void corridor::action(){
    cout << "" << endl;
}