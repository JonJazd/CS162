#include <iostream>
#include "Space.hpp"
#include <string>

using std::string;
using std::cout;
using std::endl;

Space::Space(){
    w = nullptr;
    n = nullptr;
    e = nullptr;
    s = nullptr;
    examined = false;
    endRoom = false;
    entryLine = "You have not examined your surroundings.";
}
void Space::enter(){
    cout << entryLine << endl;
}
void Space::setN(Space* a){
    n = a;
}
void Space::setS(Space* b){
    s = b;
}
void Space::setW(Space* c){
    w = c;
}
void Space::setE(Space* d){
    e = d;
}
int Space::answerIt(int){
    return 0;
}
void Space::unlock(int){
    return;
}
void Space::setEndRoom(){
    return;
}
void Space::setGiveKey(){
    return;
}
Space::~Space(){
    
}