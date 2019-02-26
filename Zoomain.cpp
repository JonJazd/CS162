#include <iostream>
#include "Animal.hpp"
#include "Tiger.hpp"
#include "Penguin.hpp"
#include "Turtle.hpp"
#include "menu.hpp"
#include <string>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int totalAnimals = 0;
int arrayMax = 10;
int totalTigers = 0;
int money = 100000;
int dayCount = 0;

Animal* zooAnimals = new Animal[10];

//function which doubles the size of the array if the number of total animals goes over the max array size
void increaseArray(Animal* a){
    Animal* newZooArray = new Animal[arrayMax*2];
    for (int b=0;b<arrayMax;b++){
        newZooArray[b] = a[b];
    }
    delete [] zooAnimals;
    zooAnimals = newZooArray;
    arrayMax *=2;
}
//function to add a tiger
void addTiger(int a){
    Tiger tigger;
    totalTigers+=1;
    totalAnimals+=1;
    if (a>0){
        money -= tigger.cost;
        for (int d=0;d<a;d++){
            tigger.ageUp();
        }
    }
    if (totalAnimals>=arrayMax){
        increaseArray(zooAnimals);
    }
    zooAnimals[totalAnimals-1] = tigger;
}
//function to add a penguin
void addPenguin(int b){
    Penguin pingu;
    totalAnimals +=1;
    if (b>0){
        money -= pingu.cost;
        for (int d=0;d<b;d++){
            pingu.ageUp();
        }
    }
    if (totalAnimals>=arrayMax){
        increaseArray(zooAnimals);
    }
    zooAnimals[totalAnimals-1] = pingu;
}
//function to add a turtle
void addTurtle(int c){
    Turtle tortimer;
    totalAnimals +=1;
    if (c>0){
        money -= tortimer.cost;
        for (int d=0;d<c;d++){
            tortimer.ageUp();
        }
    }
    if (totalAnimals>=arrayMax){
        increaseArray(zooAnimals);
    }
    zooAnimals[totalAnimals-1] = tortimer;
}
//function which performs all tasks in one day
int day(){
    //ages up all animals and subtracts their feeding cost from the total amount of money
    for (int i=0;i<totalAnimals;i++){
        zooAnimals[i].ageUp();
        if (zooAnimals[i].type=="Tiger"){
            money -= zooAnimals[i].baseFoodCost*5;
        } else if (zooAnimals[i].type=="Penguin"){
            money -= zooAnimals[i].baseFoodCost;
        } else if (zooAnimals[i].type=="Turtle"){
            money -= zooAnimals[i].baseFoodCost/2;
        }
    }
    int ran = (rand() % 4) + 1;
    //1 = sick, 2 = boom, 3 = baby, 4 = nothing
    //deletes a sick animal
    if (ran==1){
        int randAnimal = rand() % totalAnimals;
        totalAnimals -= 1;
        if (zooAnimals[randAnimal].type=="Tiger"){
            totalTigers -= 1;
        }
        for (int a=0;a<totalAnimals;a++){
            if (a>randAnimal){
                zooAnimals[a] = zooAnimals[a+1];
            }
        }
        cout << "A zoo animal got sick and passed away." << endl;
        //adds an amount of bonus money per tiger
    } else if (ran==2){
        int randAmount = (rand() % 250) + 250;
        money += (randAmount*totalTigers);
        cout << "Today there was a boom in attendance increasing income by " << randAmount << " per tiger." << endl;
        //checks if there is an adult animal, then finds an adult animal at random and generates baby animals.
    } else if (ran==3){
        bool adultCheck;
        for (int y=0;y<totalAnimals;y++){
            if (zooAnimals[y].age>2){
                adultCheck=true;
                break;
            } else {
                adultCheck=false;
            }
        }
        while (adultCheck){
            int randAdult = rand() % totalAnimals;
            if (zooAnimals[randAdult].age>2){
                if (zooAnimals[randAdult].type=="Tiger"){
                    addTiger(0);
                    break;
                } else if (zooAnimals[randAdult].type=="Penguin"){
                    for (int b=0;b<5;b++){
                        addPenguin(0);
                    }
                    break;
                } else if (zooAnimals[randAdult].type=="Turtle"){
                    for (int c=0;c<10;c++){
                        addTurtle(0);
                    }
                    break;
                }
            }
        }
        if (adultCheck){
            cout << "An animal went into labor and delievered their babies today." << endl;
        } else {
            cout << "Nothing of interest happened today" << endl;
        }
        //nothing happens
    } else if (ran==4){
        cout << "Nothing of interest happened today" << endl;
    }
    //adds money to total amount of money per animal
    for(int x=0; x<totalAnimals;x++){
        money += ((zooAnimals[x].payoff*zooAnimals[x].cost)/100);
    }
    int endDayChoice;
    //prints info and asks to buy an animal
    cout << "Your available funds are " << money << endl;
    cout << "Total animals " << totalAnimals << endl;
    cout << "Would you like to buy an adult animal?" << endl;
    cout << "Enter 1 to buy a tiger. 2 to buy a penguin. 3 to buy a turtle." << endl;
    cout << "Enter 4 to move on to the next day. Enter 5 to quit." << endl;
    cin >> endDayChoice;
    int continueWhile = 1;
    if (endDayChoice==4 || endDayChoice==5){
        continueWhile = 0;
    }
    //continously asks if the user wants to buy an animal
    while (continueWhile){
        if (endDayChoice==1){
            addTiger(3);
            cout << "Bought a tiger." << endl;
            cout << "Total animals " << totalAnimals << endl;
        } else if (endDayChoice==2){
            addPenguin(3);
            cout << "Bought a penguin." << endl;
            cout << "Total animals " << totalAnimals << endl;
        } else if (endDayChoice==3){
            addTurtle(3);
            cout << "Bought a turtle." << endl;
            cout << "Total animals " << totalAnimals << endl;
        }
        cout << "Enter 1 to buy a tiger. 2 to buy a penguin. 3 to buy a turtle." << endl;
        cout << "Enter 4 to move on to the next day. Enter 5 to quit." << endl;
        cin >> endDayChoice;
        if (endDayChoice==4 || endDayChoice==5){
            continueWhile = 0;
            break;
        }
    }
    //game over
    if (money<1){
        cout << "You have run out of money. Game Over." << endl;
        dayCount += 1;
        return 0;
    }
    //quit
    if (endDayChoice==5){
        dayCount += 1;
        return 0;
        //continue
    } else if (endDayChoice==4){
        dayCount += 1;
        return 1;
    }
    dayCount += 1;
    return 0;
}

int main(){
    menu men;
    int startGame = men.start();
    if (startGame==0 || startGame ==404){
        return 0;
    }
    cout << "Congratulations! You are now the proud owner of a zoo." << endl;
    cout << "You start with " << money << " dollars and can purchase Tigers, Penguins and Turtles." << endl;
    cout << "Tigers cost 10000. Peguins cost 1000. Turtles cost 100." << endl;
    int* infArray = men.info();
    for (int a=0;a<infArray[0];a++){
        addTiger(0);
    }
    for (int b=0;b<infArray[0];b++){
        addPenguin(0);
    }
    for (int c=0;c<infArray[0];c++){
        addTurtle(0);
    }
    int dayChoice =1;
    while(dayChoice==1){
        dayChoice = day();
        cout << "End of day " << dayCount << endl;
    }
    if (dayChoice==0){
        cout << "Goodbye." << endl;
        delete [] zooAnimals;
        return 0;
    }
}