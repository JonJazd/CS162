#include <iostream>
#include "menu.hpp"
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


int infoArray[2];
//asks user to input an option and returns the number they selected, returns 0 if they want to quit.
int* menu::start(){
    string option1 = "Vampire";
    string option2 = "Barbarian";
    string option3 = "Blue men";
    string option4 = "Medusa";
    string option5 = "Harry Potter";
    string option6 = "Exit.";
    cout << "Please enter the number of the option which you would like to choose for your first fighter." << endl;
    cout << "1. " << option1 << endl;
    cout << "2. " << option2 << endl;
    cout << "3. " << option3 << endl;
    cout << "4. " << option4 << endl;
    cout << "5. " << option5 << endl;
    cout << "6. " << option6 << endl;
    int choice;
    cin >> choice;
    if (choice == 6){
        cout << "Exitting.." << endl;
        infoArray[0] = 0;
        infoArray[1] = 0;
        return infoArray;
    }
    else if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5){
        infoArray[0] = choice;
    }
    else {
        cout << "Exitting." << endl;
        infoArray[0] = 404;
        infoArray[1] = 0;
        return infoArray;
    }
    cout << "Please enter the number of the option which you would like to choose for your second fighter." << endl;
    cin >> choice;
    if (choice == 6){
        cout << "Exitting.." << endl;
        infoArray[0] = 0;
        infoArray[1] = 0;
        return infoArray;
    }
    else if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5){
        infoArray[1] = choice;
        return infoArray;
    }
    else {
        cout << "Exitting." << endl;
        infoArray[0] = 404;
        infoArray[1] = 0;
        return infoArray;
    }
}   
//asks user questions related to the game, returns an int with the choice the player made.
int menu::info(){
    int entry = -1;
    while (entry!=1 && entry !=2){
        cout << "1. Play again?" << endl;
        cout << "2. Exit." << endl;
        cin >> entry;
    }
    return entry;

    /*int tigs;
    int pengs;
    int turts;
    int player1dice;
    int player2dice;
    bool corrTigs = true;
    bool corrPengs = true;
    bool corrTurts = true;
    bool corrStartR = true;
    bool corrStartC = true;
    cout << "Will you buy 1 or 2 tigers?" << endl;
    cin >> tigs;
    cout << "Will you buy 1 or 2 penguins?" << endl;
    cin >> pengs;
    cout << "Will you buy 1 or 2 turtles?" << endl;
    cin >> turts;
    cout << "What type of dice will be used for player 1?" << endl;
    cout << "Enter 1 for regular dice." << endl;
    cout << "Enter 2 for loaded dice." << endl;
    cin >> player1dice;
    cout << "What type of dice will be used for player 2?" << endl;
    cout << "Enter 1 for regular dice." << endl;
    cout << "Enter 2 for loaded dice." << endl;
    cin >> player2dice;
    if (tigs!=1 && tigs!=2){
        corrTigs = false;
    }
    if (pengs!=1 && pengs!=2){
        corrPengs = false;
    }
    if (turts!=1 && turts!=2){
        corrTurts = false;
    }
    if (player1dice!=2 && player1dice!=1){
        corrStartR = false;
    }
    if (player2dice!=1 && player2dice!=2){
        corrStartC = false;
    }
    while (!corrTigs){
        cout << "You must buy between 1 and 2 Tigers." << endl;
        cin >> tigs;
        if (tigs==1 || tigs==2){
            corrTigs = true;
        }
    }
    while (!corrPengs){
        cout << "You must buy between 1 and 2 Penguins" << endl;
        cin >> pengs;
        if (pengs==1 || pengs ==2){
            corrPengs = true;
        }
    }
    while (!corrTurts){
        cout << "You must buy between 1 and 2 Turtles" << endl;
        cin >> turts;
        if (turts==1 || turts == 2){
            corrTurts = true;
        }
    }
    while (!corrStartR){
        cout << "That is not a correct value for type of dice for player 1. Please enter a 1 for regular or 2 for loaded." << endl;
        cin >> player1dice;
        if (player1dice==1 || player1dice==2){
            corrStartR = true;
        }
    }
    while (!corrStartC){
        cout << "That is not a correct value for type of dice for player 2. Please enter a 1 for regular or 2 for loaded." << endl;
        cin >> player2dice;
        if (player2dice==1 || player2dice==2){
            corrStartC = true;
        }
    }
    infoArray[0] = tigs;
    infoArray[1] = pengs;
    infoArray[2] = turts;
    infoArray[3] = player1dice;
    infoArray[4] = player2dice;
    return infoArray;*/
}
//Prints out all the people at the unviersity and asks who will do work. If no people at the unviersity then function returns.
/*int menu::workPerson(University a){
    if (a.numPeople==0){
        cout << "No people at this university." << endl;
        return 0;
    } else {
        for (int b=0;b<a.numPeople;b++){
            cout << b+1 << ". " << a.people[b]->getName() << endl;
        }
        int choice3 = 0;
        while (!choice3 || choice3>a.numPeople){
            cout << "Enter the number of the person who will perform work." << endl;
            cin >> choice3;
        }
        return choice3-1;
    }
}*/