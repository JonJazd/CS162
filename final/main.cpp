#include <iostream>
#include "corridor.hpp"
#include "doorRoom.hpp"
#include "problemRoom.hpp"
#include "Space.hpp"
#include "entrance.hpp"
#include "endingroom.hpp"
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

Space* current = nullptr;
Space * rooms[13];
int choice;
char choicechar;
int gold =0;
int keys= 0;
bool done = false;

/*                      num3
                        cor
                        lock
                        num2*
                        lock
ent - cor - num1 - cor - num2 - cor - num1*

*/
void move(char ch){
    if (ch=='n' && current->n != nullptr){
        current = current->n;
    } else if (ch=='s' && current->s != nullptr){
        current = current->s;
    } else if (ch=='w' && current->w != nullptr){
        current = current->w;
    } else if (ch=='e' && current->e != nullptr){
        current = current->e;
    } else {
        cout << "That is not a valid input." << endl;
    }
    current->enter();
}

int main(){
    rooms[0] = new entrance;
    current = rooms[0];

    rooms[1] = new corridor;
    rooms[0]->setE(rooms[1]);

    rooms[2] = new problemRoom(1);
    rooms[1]->setE(rooms[2]);
    rooms[2]->setW(rooms[1]);

    rooms[3] = new corridor;
    rooms[2]->setE(rooms[3]);
    rooms[3]->setW(rooms[2]);

    rooms[4] = new problemRoom(2);
    rooms[3]->setE(rooms[4]);
    rooms[4]->setW(rooms[3]);

    rooms[5] = new corridor;
    rooms[4]->setE(rooms[5]);
    rooms[5]->setW(rooms[4]);

    rooms[6] = new problemRoom(1);
    rooms[5]->setE(rooms[6]);
    rooms[6]->setGiveKey();
    rooms[6]->setW(rooms[5]);

    rooms[7] = new doorRoom;
    rooms[4]->setN(rooms[7]);
    rooms[7]->setS(rooms[4]);

    rooms[8] = new problemRoom(2);
    rooms[7]->setN(rooms[8]);
    rooms[8]->setS(rooms[7]);
    rooms[8]->setGiveKey();

    rooms[9] = new doorRoom;
    rooms[8]->setN(rooms[9]);
    rooms[9]->setS(rooms[8]);

    rooms[10] = new corridor;
    rooms[9]->setN(rooms[10]);
    rooms[10]->setS(rooms[9]);

    rooms[11] = new problemRoom(3);
    rooms[10]->setN(rooms[11]);
    rooms[11]->setS(rooms[10]);

    rooms[12] = new endingroom;
    rooms[11]->setN(rooms[12]);

    current->enter();
    cin >> choice;
    while (!done){
        if (choice>0 && choice<251){
            gold = choice;
            if (gold==250){
                cout << "You eat your spinach and hoist 250 pounds of gold." << endl;
            } else {
                cout << "You pick up " << gold << " pounds of gold." << endl;
            }
            cout << "You hear a panel slide into place behind you, sealing the gold room." << endl;
            char echar = 'e';
            move(echar);
            break;
        } else if (choice<1){
            cout << "You must pick up some gold." << endl;
        } else if (choice>250){
            cout << "You cannot carry that much." << endl;
        }
        cout << "Please enter a number for how many pounds of gold you wish to pick up.";
        cin >> choice;
    }
    choice = 0;
    while (!done){
        cout << endl;
        cin.clear();
        current->showDirections();
        current->action();
        if (current->examined == false){
            cout << "Enter x to examine your surroundings" << endl;
        }
        cout << "Enter i to check your inventory." << endl;
        cin >> choicechar;
        if (choicechar == 'w' || choicechar == 'e' || choicechar == 'n' || choicechar == 's' || choicechar == 'a' || choicechar == 'i' || choicechar == 'x'){
            if (choicechar=='x'){
                current->examine();
            } else if (choicechar== 'a' && (current == rooms[7] || current==rooms[9])){
                current->unlock(keys);
                if (keys>0){
                    keys -= 1;
                }
            } else if (choicechar == 'a' && (current == rooms[2] || current == rooms[4] || current == rooms[6] || current == rooms[8] || current == rooms[11])){
                cout << "Enter how many pounds to place in order to answer the problem." << endl;
                cin >> choice;
                while (choice>gold || choice<1 || !choice || cin.fail()){
                    if (choice>gold){
                        cout << "That is more gold than you have. Choose a number between 1 and " << gold << endl;
                    }
                    else if (choice<1){
                        cout << "You must use some gold to answer the problem." << endl;
                        cin.clear();
                    } else if (!choice || cin.fail()){
                        cout << "That is an invalid choice" << endl;
                        cin.clear();
                    }
                    cin >> choice;
                }
                gold -= choice;
                int possibleKey = current->answerIt(choice);
                keys += possibleKey;
            } else if (choicechar== 'i'){
                cout << "You have " << gold << " pounds of gold and " << keys << " keys." << endl;
            } else {
                move(choicechar);
            }
        } else {
            cout << "That is not a valid input." << endl;
        }
        if (current==rooms[12]){
            cout << "You have made it out with " << gold << " pounds of gold!" << endl;
            for (int z=0;z<13;z++){
                delete rooms[z];
            }
            break;
        }
        if (gold==0 && current!=rooms[11]){
            cout << "You have run out of gold and are trapped forever." << endl;
            cout << "Game Over." << endl;
            for (int z=0;z<13;z++){
                delete rooms[z];
            }
            break;
        }
    }
    
}