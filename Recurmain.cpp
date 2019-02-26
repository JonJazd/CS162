#include <iostream>
#include "menu.hpp"
#include "reverse.hpp"
#include "calcTriangle.hpp"
#include "arraySum.hpp"
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main(){
    menu men;
    int choice = men.start();
    if (choice==1){
        cout << "Please enter a string to reverse" << endl;
        string entry;
        //cin >> entry;
        getline(cin,entry);
        getline(cin,entry);
        reverse(entry);
    } else if (choice==2){
        cout << "Please enter 5 integers." << endl;
        int one[5];
        cin >> one[0];
        cin >> one[1];
        cin >> one[2];
        cin >> one[3];
        cin >> one[4];
        int sum = arraySum(one,5);
        cout << sum << endl;
    } else if (choice==3){
        cout << "Please enter an integer to calculate the triangle of." << endl;
        int trig;
        cin >> trig;
        int triangle = calcTriangle(trig);
        cout << triangle << endl;
    } else if (choice==4 || choice ==404){
        return 0;
    }
}