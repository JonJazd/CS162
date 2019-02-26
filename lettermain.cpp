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

int main(){
    ifstream file;
    int numArray[26];
    for (int a=0;a<26;a++){
        numArray[a] =0;
    }
    count_letters(file,numArray);
    return 0;
}