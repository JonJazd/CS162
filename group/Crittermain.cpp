#include <iostream>
#include "Ant.hpp"
#include "Critter.hpp"
#include "Doodlebug.hpp"
#include <string>

using std::string;
using std::cout;
using std::endl;

char** Rows;
int totalAnts = 0;
int totalDoodlebugs = 0;

void makeGrid(){
    Rows = new char*[20];
    for (int z=0;z<20;z++){
        Rows[z] = new char[20];
    }
}
void deleteGrid(){
    for (int y=0;y<20;y++){
        delete[] Rows[y];
    }
    delete [] Rows;
}
void printGrid(){
    for (int x=0;x<20;x++){
        for (int w=0;w<20;w++){
            if (w=0){
                cout << "| " << Rows[x][w];
            } else if (w=19){
                cout << Rows[x][w] << " |" << endl;
            } else {
                cout << Rows[x][w];
            }
        }
    }
}

int main(){
    //create grid
    makeGrid();
    //create critter arrays
    Critter* doodlebugArray = new Critter[5];
    Critter* antArray = new Critter[100];
    //create Doodlebugs
    for (int a=0;a<5;a++){
        doodlebugArray[totalDoodlebugs] = new Doodlebug(Rows);
        totalDoodlebugs +=1;
    }
    //create Ants
    for (int b=0;b<100;b++){
        antArray[totalAnts] = new Ant(Rows);
        totalAnts += 1;
    }
    cout << "How many times steps should be run?" << endl;
    int steps;
    cin >> steps;
    for (int c=0;c<steps;c++){
        
    }
}