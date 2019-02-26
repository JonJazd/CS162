#include <iostream>
#include "reverse.hpp"
#include <string>
using std::string;
using std::cout;
using std::endl;

void reverse(string a){
    int size = a.size();
    if (a.empty()){
        cout << endl;
    } else {
        cout << a[size-1];
        a.pop_back();
        reverse(a);
    }
}