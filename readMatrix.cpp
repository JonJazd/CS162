#include <iostream>
#include <string>
#include "readMatrix.hpp"
using std::cout;
using std::endl;
using std::cin;
using std::string;

void readMatrix::read(int** a,int b){
    if (b==2){
        int first;
        int second;
        int third;
        int fourth;
        cout << "Please enter 4 integers." << endl;
        cin >> first;
        cin >> second;
        cin >> third;
        cin >> fourth;
        a[0][0] = first;
        a[0][1] = second;
        a[1][0] = third;
        a[0][1] = fourth;
    }
    else if (b==3){
        int first;
        int second;
        int third;
        int fourth;
        int fifth;
        int sixth;
        int seventh;
        int eighth;
        int ninth;
        cout << "Please enter 9 integers." << endl;
        cin >> first;
        cin >> second;
        cin >> third;
        cin >> fourth;
        cin >> fifth;
        cin >> sixth;
        cin >> seventh;
        cin >> eighth;
        cin >> ninth;
        a[0][0] = first;
        a[0][1] = second;
        a[0][2] = third;
        a[1][0] = fourth;
        a[1][1] = fifth;
        a[1][2] = sixth;
        a[2][0] = seventh;
        a[2][1] = eighth;
        a[2][2] = ninth;
    }
}