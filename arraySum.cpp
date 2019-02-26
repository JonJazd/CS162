#include <iostream>
#include "arraySum.hpp"

int arraySum(int* a,int b){
    if (b==0){
        return a[b];
    }
    return a[b] + arraySum(a,b-1);
}