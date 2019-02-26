#include <iostream>
#include <fstream>
#include <string>
#include "count_letters.hpp"
#include "output_letters.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;
using std::getline;

string readFile;
string letter;
char alphab[52] = {'a','A','b','B','c','C','d','D','e','E','f','F','g','G','h','H','i','I','j','J','k','K','l','L','m','M','n','N','o','O','p','P','q','Q','r','R','s','S','t','T','u','U','v','V','w','W','x','X','y','Y','z','Z'};

void count_letters(ifstream & a ,int* b){
    cout << "Enter file name to be read from." << endl;
    cin >> readFile;
    a.open(readFile);
    if (a){
        while (getline(a,letter)){
            int letterLength = letter.length();
            for (int l = 0;l<letterLength+1;l++){
                for (int i=0;i<52;i++){
                    if (letter[l]==alphab[i] || letter[l]==alphab[i+1]){
                        b[(i/2)] += 1;
                    }
                    i++;
                }
            }
            cout << "end" << endl;
            ofstream file;
            output_letters(file,b);
            for (int k=0;k<26;k++){
                b[k]=0;
            }
        }
        a.close();
    }
    else {
        cout << "No such file." << endl;
    }
}