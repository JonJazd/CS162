#include <iostream>
#include "Ant.hpp"
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

    int loc1;
    int loc2;
    int location[2] = {loc1,loc2};
    //function to move ant to new position and update oreintation
    void Ant::move(string** a,int x,int y){
        cout << "moving" << endl;
        if (direction==UP){
            if(loc1>0){
                loc1 -= 1;
                location[0] -= 1;
            }
        }
        else if (direction==DOWN){
            if (loc1<y-1){
                loc1 += 1;
                location[0] += 1;
            }
        }
        else if (direction==RIGHT){
            if (loc2<x-1){
                loc2 += 1;
                location[1] += 1;
            }
        }
        else if (direction==LEFT){
            if (loc2>0){
                loc2 -= 1;
                location[1] -= 1;
            }
        }
        if (a[loc1][loc2]=="#"){
            if (direction==0){
                direction = LEFT;
            }
            else {
                direction = facing(direction-1);
            }
        }
        else {
            if (direction==3){
                direction = UP;
            }
            else {
                direction = facing(direction+1);
            }
        }
    }
    //function that returns ant location
    int* Ant::getLoc(){
        cout << "new loc: [" << location[0] << "," << location[1] << "]" << endl;
        return location;
    }
    //creates new ant at pos [b][c] facing up
    Ant::Ant(int b, int c){
        loc1 = b;
        loc2 = c;
        location[0] = loc1;
        location[1] = loc2;
        direction = UP;
    }

