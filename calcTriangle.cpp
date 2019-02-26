#include <iostream>
#include "calcTriangle.hpp"

int calcTriangle(int a){
    if (a==0){
        return 0;
    }
    return a + calcTriangle(a-1);
}