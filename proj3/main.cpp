#include <iostream>
#include "Character.hpp"
#include "HarryPotter.hpp"
#include "Barbarian.hpp"
#include "BlueMen.hpp"
#include "Medusa.hpp"
#include "Vampire.hpp"
#include "menu.hpp"
#include <string>
using std::cout;
using std::endl;
using std::string;

int fight(Character** b,int c){
    cout << "Round " << c << endl;
    cout << "First attack." << endl;
    cout << "1. " << b[0]->name << endl;
    cout << "2. " << b[1]->name << " armor:" << b[1]->armor << " strength: " << b[1]->getHealth() << endl;
    int attack1 = b[0]->attack();
    int defence1 = b[1]->defence();
    if (attack1==100){
        cout << "3. GLARE!!" << endl;
    } else {
        cout << "3. Attack: " << attack1 << endl;
    }
    if (defence1==999){
        cout << "4. CHARM!!" << endl;
    } else {
        cout << "4. Defence(defence + armor): " << defence1 << endl;
    }
    int damage = attack1;
    damage -= defence1;
    if (damage<0){
        damage = 0;
    }
    if (attack1==100){
        cout << "5. Damage: GLARE" << endl;
    } else {
        cout << "5. Damage: " << damage << endl;
    }
    int newS = b[1]->takeDamage(attack1,defence1);
    cout << "6. New strength: " << newS << endl;
    if (b[1]->getHealth()==0){
        cout << b[1]->name << " has died" << endl;
        return 0;
    }

    cout << "Round " << c << endl;
    cout << "Second attack." << endl;
    cout << "1. " << b[1]->name << endl;
    cout << "2. " << b[0]->name << " armor:" << b[0]->armor << " strength" << b[0]->getHealth() << endl;
    attack1 = b[1]->attack();
    defence1 = b[0]->defence();
    if (attack1==100){
        cout << "3. GLARE!!" << endl;
    } else {
        cout << "3. Attack: " << attack1 << endl;
    }
    if (defence1==999){
        cout << "4. CHARM!!" << endl;
    } else {
        cout << "4. Defence (defence + armor): " << defence1 << endl;
    }
    damage = attack1;
    damage -= defence1;
    if (damage<0){
        damage = 0;
    }
     if (attack1==100){
        cout << "5. Damage: GLARE" << endl;
    } else {
        cout << "5. Damage: " << damage << endl;
    }
    newS = b[0]->takeDamage(attack1,defence1);
    cout << "6. New strength: " << newS << endl;
    if (b[0]->getHealth()==0){
        cout << b[0]->name << " has died" << endl;
        return 0;
    }
    return 1;
}

int main(){
    Character* charPArray[2];
    menu men;
    int* choices;
    choices = men.start();
    if (choices[0]==0 || choices[0]==404){
        return 0;
    }
    for (int a=0;a<2;a++){
        if (choices[a]==1){
            charPArray[a] = new Vampire;
        } else if (choices[a]==2){
            charPArray[a] = new Barbarian;
        } else if (choices[a]==3){
            charPArray[a] = new BlueMen;
        } else if (choices[a]==4){
            charPArray[a] = new Medusa;
        } else if (choices[a]==5){
            charPArray[a] = new HarryPotter;
        }
    }
    int fighting = 1;
    int round = 1;
    while (fighting==1){
        int go = fight(charPArray,round);
        round++;
        if (go==0){
            break;
        }
        fighting = men.info();
    }
    return 0;
}