#include <iostream>
#include "entrance.hpp"
#include <string>

using std::string;

entrance::entrance():Space(){
    entryLine = "You have finally arrived in the treasure room.\nThere is an infinite amount of gold here, but you can only carry a max of 250 pounds.\n";
    entryLine += "In the following rooms you will need to deposit pounds of gold in order to answer questions\n";
    entryLine += "You will also need to use keys to unlock doors.\n";
    entryLine += "If you run out of gold you are trapped in the dungeon\n";
    entryLine += "Make your way out of the dungeon with as much gold as you can.\n";
    entryLine += "Enter a number to pick up that many pounds of gold.\n";
    entryLine += "You will then exit out to the dungeon. Best of luck.";
}
void entrance::showDirections(){

}
void entrance::action(){
    
}
void entrance::display(){
    
}
void entrance::examine(){
    
}