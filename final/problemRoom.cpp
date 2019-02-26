#include <iostream>
#include "problemRoom.hpp"
#include <string>
#include <cstdlib>

using std::string;
using std::cout;
using std::endl;

int answers[15] = {4,5,5,8,4,63,9,76,60,64,1,6,32,56,2};
string problems[15] = {
    "1 2 3 _", //4
    "1 1 2 3 _", //5
    "1005 105 15 _", //5
    "2 4 6 _", //8
    "25 16 9 _", //4
    "2 3 8 _", //63
    "43046721 6561 81 _", //9
    "62 64 68 _", //76
    "16 32 8 48 6 _", //60
    "1536 384 128 _", //64
    "6559 79 7 _", //1
    "5764800 2400 48 _", //6
    "2 1 1/4 _", //32
    "20 30 42 _", //56
    "20 12 6 _" //2
};

problemRoom::problemRoom(int a):Space(){
    problem = generateProblem(a);
    solved = false;
    endRoom = false;
    giveKey = false;
    if (a == 3){
        endRoom = true;
    }
}
void problemRoom::display(){
    cout << problem << endl;
}
void problemRoom::examine(){
    entryLine = "There are markings on the wall that read:";
    enter();
    display();
    entryLine += "\n";
    entryLine += problem;
    examined = true;
}
string problemRoom::generateProblem(int b){
    int ran = rand() % 5;
    answer = answers[((b-1)*5)+ran];
    return problems[((b-1)*5)+ran];
}
int problemRoom::answerIt(int ans){
    if (ans==answer){
        solved = true;
    } else {
        solved = false;
    }
    cout << "Your gold turns to lead." << endl;
    if (solved){
        cout << "A door slides open." << endl;
        if (giveKey){
            cout << "A key slides into your pocket." << endl;
            return 1;
        }
    } else {
        cout << "Nothing happens." << endl;
    }
    return 0;
}
void problemRoom::showDirections(){
    if (solved){
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
            cout << "Press s to go through the doorway to the south. ";
        }
        if (w!=nullptr){
            cout << "Press w to go through the doorway to the west. ";
        }
    }
    cout << endl;
}
void problemRoom::setEndRoom(){
    endRoom = true;
}
void problemRoom::setGiveKey(){
    giveKey = true;
}
void problemRoom::action(){
    if (!solved && examined){
        cout << "Enter a to answer the problem." << endl;
    }
}