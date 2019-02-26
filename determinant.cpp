#include <iostream>
#include "determinant.hpp"

int determinant::det(int** a,int b){
    if (b==2){
        int det = a[0][0]*(a[1][1]);
        det -= a[0][1]*(a[1][0]);
        return det;
    }
    else if (b==3){
        int det1 = a[1][1]*(a[2][2]);
        det1 -= a[1][2]*(a[2][1]);
        det1 *= a[0][0];
        int det2 = a[1][0]*(a[2][2]);
        det2 -= a[1][2]*(a[0][2]);
        det2 *= a[0][1];
        int det3 = a[1][0]*(a[2][1]);
        det3 -= a[1][1]*(a[2][0]);
        det3 *= a[0][2];
        int det = det1 - det2 + det3;
        return det; 
    }
}