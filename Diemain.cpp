#include <iostream>
#include "LoadedDie.hpp"
#include "Die.hpp"
#include "menu.hpp"
#include <string>
#include "Game.hpp"

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(){
    bool player1cheat =0;
    bool player2cheat =0;
    menu men;
    int startOption;
    //starts menu
    startOption = men.start();
    if (startOption==0 || startOption==404){
        //exits if exit option was chosen or invalid option
        return 0;
    }
    int* startArray;
    //gathers info from user into array
    startArray = men.info();
    int player1sides = startArray[0];
    int player2sides = startArray[1];
    int rounds = startArray[2];
    if (startArray[3]==2){
        player1cheat = 1;
    }
    if (startArray[4]==2){
        player2cheat = 1;
    }
    Game game1;
    //runs game for given number of rounds
    for (int a=0;a<rounds;a++){
        game1.round(player1cheat,player2cheat,player1sides,player2sides);
    }
    game1.win();
    return 0;
}