#include <iostream>
#include <fstream>
#include <string>
#include "output_letters.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;

string alpha[26]= {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};

void output_letters(ofstream & a,int* b){
    string fileName;
    cout << "Enter name of file to output to." << endl;
    cin >> fileName;
    a.open(fileName);
    for (int i=0;i<26;i++){
        a << alpha[i] << ": " << b[i] << endl;
    }
    a.close();
}