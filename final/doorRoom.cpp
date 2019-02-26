#include <iostream>
#include "doorRoom.hpp"
#include <string>

using std::string;
using std::cout;
using std::endl;

doorRoom::doorRoom():Space(){
    locked = true;
}
void doorRoom::unlock(int a){
    if (a>0){
        locked = false;
        display();
        entryLine = "There is a door on the other side of the room.";
    } else {
        cout << "You don't have a key." << endl;
    }
}
void doorRoom::examine(){
    entryLine = "There is a door with a keyhole on the other side of the room.";
    enter();
    examined = true;
}
void doorRoom::display(){
    cout << "The door unlocked!" << endl;
}
void doorRoom::action(){
    if (locked && examined){
        cout << "Enter a to try to unlock the door." << endl;
    }
}
void doorRoom::showDirections(){
    if (!locked){
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
    } else {
        if (s!=nullptr){
            cout << "Press s to go through the doorway to the south." ;
        }
        if (w!=nullptr){
            cout << "Press e to go through the doorway to the west." ;
        }
    }
    cout << endl;
}