#include <iostream>
#include "Ant.hpp"
#include "menu.hpp"
#include "antBoard.hpp"
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

menu men;
void run(){
    int* info = men.info();
    int rows= info[0];
    int col= info[1];
    int steps= info[2];
    int startRow= info[3];
    int startCol= info[4];
    antBoard board1(rows,col);
    Ant ant1(startRow,startCol);
    int* intloc;
    intloc = ant1.getLoc();
    board1.print(intloc);
    for (int a=0;a<steps;a++){
        ant1.move(board1.board,col,rows);
        int* loc;
        loc = ant1.getLoc();
        board1.colorChange(loc);
        board1.print(loc);
    }
    board1.del(board1.board);
}

int main(){
    bool running= true;
    int choice;
    int selection = men.start();
    if (selection == 0 || selection == 404){
        return 0;
    }
    else {
        run();
    }
    while (running){
        cout << "1. Play again" << endl;
        cout << "2. Quit" << endl;
        cin >> choice;
         while (choice!=1 && choice!=2){
                cout << "That is not a correct input. Please input 1 to play again or 2 to quit." << endl;
                cin >> choice;
            }
        if (choice==1){
            run();
        }
        else if (choice==2){
            return 0;
        }
    }
}