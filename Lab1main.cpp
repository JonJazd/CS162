#include <iostream>
#include <string>
#include "readMatrix.hpp"
#include "determinant.hpp"
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main(){
    string size;
    cout << "Is the matrix size 2x2 or 3x3?" << endl;
    cin >> size;
    if (size == "2x2"){
        int** ary = new int*[2];
        for (int i=0;i<2;i++){
            ary[i] = new int[2];
        } 
        int det;
        readMatrix::read(&ary,2);
        det = determinant::det(&ary,2);
        cout << ary[0][0] << " " << ary[0][1] << endl;
        cout << ary[1][0] << " " << ary[1][1] << endl;
        cout << det << endl;
        for (int a=0;a<2;a++){
            delete [] ary[a];
        }
        delete [] ary;
    }
    else if (size =="3x3"){
        int** ary = new int*[3];
        for (int i=0;i<3;i++){
            ary[i] = new int[3];
        }
        int det;
        readMatrix::read(&ary,3);
        det = determinant::det(&ary,3);
        cout << ary[0][0] << " " << ary[0][1] << " " << ary[0][2] << endl;
        cout << ary[1][0] << " " << ary[1][1] << " " << ary[1][2] << endl;
        cout << ary[2][0] << " " << ary[2][1] << " " << ary[2][2] << endl;
        cout << det << endl;
        for (int a=0;a<3;a++){
            delete [] ary[a];
        }
        delete [] ary;
    }
}