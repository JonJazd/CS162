#include <iostream>
#include "Ant.hpp"


int* Ant::move(char** & a){
    //keep in mind range of cols and rows is between 0-19 not 1-20
    int randomDirection = rand % 4;
    //moving up, i.e. 1,1 to 0,1
    if (randomDirection==0){
        //if not at top row and spot above is unoccupied
        if (row>0 && a[row-1][col]==' '){
            row-=1;
            a[row][col] = ' ';
            a[row-1][col] = 'O';
        }
        moveSinceLastBreed += 1;
    //moving right, i.e. 1,1 to 1,2
    } else if (randomDirection==1){
        //if not at rightmost column and space is unoccupied
        if (col<19 && a[row][col+1]==' '){
            col+=1;
            a[row][col] = ' ';
            a[row][col+1] = 'O';
        }
        moveSinceLastBreed += 1;
    //moving down, i.e. 1,1 to 2,1
    } else if (randomDirection==2){
        //if not at rightmost column and space is unoccupied
        if (row<19 && a[row+1][col]==' '){
            row+=1;
            a[row][col] = ' ';
            a[row+1][col] = 'O';
        }
        moveSinceLastBreed += 1;
    //moving left, i.e. 1,1 to 1,0
    } else if (randomDirection==3){
        //if not at rightmost column and space is unoccupied
        if (col>0 && a[row][col-1]==' '){
            col+=1;
            a[row][col] = ' ';
            a[row][col-1] = 'O';
        }
        moveSinceLastBreed += 1;
    }
    int antMove[2] = {row,col};
    //main won't use this array, it will only be used for doodlebugs
    return antMove;
}
int* Ant::breed(char** & a){
    if (moveSinceLastBreed>=breedNumber){
        moveSinceLastBreed=0;
        //random 0-3
        int randomBreed = rand() % 4;
        //while there is an open adjacent space
        while (a[row+1][col]== ' ' || a[row-1][col]== ' ' || a[row][col+1]== ' ' || a[row][col-1]== ' '){
            //above
            if (randomBreed==0 && a[row+1][col]== ' '){
                int spot[2] = {row-1,col}
                return spot;
            }
            //right
            if (randomBreed==1 && a[row][col+1]== ' '){
                int spot[2] = {row,col+1}
                return spot;
            }
            //down
            if (randomBreed==2 && a[row-1][col]== ' '){
                int spot[2] = {row+1,col}
                return spot;
            }
            //left
            if (randomBreed==3 && a[row][col-1]== ' '){
                int spot[2] = {row,col-1}
                return spot;
            }
        }
        //only returns this if no adjacent open space.
        spot = {-10,10}
        return spot;
    }
}
void Ant::die(){

}
Ant::Ant(char** & a): Critter(){
    moveSinceLastBreed = 0;
    breedNumber = 3;
    //random number between 0 and 19
    row = rand % 20;
    col = rand % 20;
    //while a[row][col] occupied
    while (a[row][col]!=' '){
        row = rand % 20;
        col = rand % 20;
    }
    a[row][col] = 'O';
}