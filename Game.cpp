#include <iostream>
#include "Game.hpp"
#include "Die.hpp"
#include "LoadedDie.hpp"
#include <string>

using std::string;
using std::cout;
using std::endl;

int score1;
int score2;
int roll1;
int roll2;
string type1 = "Regular";
string type2 = "Regular";

Game::Game(){
    score1 = 0;
    score2 = 0;
}
//sets up each player's dice and number of sides, calls roll, compares rolls and prints out round info.
//takes params bool: 0 if not cheating, 1 if cheating. int: number of sides on die.
void Game::round(bool a,bool b,int c, int d){
    if (a){
        LoadedDie die1(c);
        roll1 = die1.roll();
        type1 = "Loaded";
    } else {
        Die die1(c);
        roll1 = die1.roll();
    }
    if (b){
        LoadedDie die2(d);
        roll2 = die2.roll();
        type2 = "Loaded";
    } else {
        Die die2(d);
        roll2 = die2.roll();
    }
    if (roll1>roll2){
        score1 += 1;
    } else if (roll2>roll1){
        score2 += 1;
    }
    cout << "Player 1 Die type: " << type1 << "    Player 2 Die type: " << type2 << endl;
    cout << " Roll: " << roll1 << "                      Roll: " << roll2 << endl;
    cout << " Score: " << score1 << "                     Score: " << score2 << endl;
}
//prints out who won
void Game::win(){
    if (score1>score2){
        cout << "Player 1 wins. Score: " << score1 << endl;
        cout << "Player 2 score: " << score2 << endl;
    } else if (score2>score1){
        cout << "Player 2 wins. Score: " << score2 << endl;
        cout << "Player 1 score: " << score1 << endl;
    } else {
        cout << "Game is tied." << endl;
        cout << "Player 1 score: " << score1 << endl;
        cout << "Player 2 score: " << score2 << endl;
    }
}