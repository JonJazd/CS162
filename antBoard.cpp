#include <iostream>
#include "antBoard.hpp"
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

    string** board;
    int height;
    int width;
    //changes color of position [loc1,loc2]
    void antBoard::colorChange(int a[]){
        int loc1 = a[0];
        int loc2 = a[1];
        if (board[loc1][loc2]=="#"){
            board[loc1][loc2] = " ";
        }
        else {
            board[loc1][loc2] = "#";
        }
    }
    //dynamically creates new board
    antBoard::antBoard(int b, int c){
        string** ary = new string*[b];
        for (int i = 0;i < b; i++){
            ary[i]= new string[c];
        }
        board = ary;
        for (int k=0;k<b;k++){
            for (int l=0;l<c;l++){
                board[k][l] = " ";
            }
        }
        height = b;
        width = c;
    }
    //prints board
    void antBoard::print(int d[]){
        cout << "| - - - |" << endl;
        for (int a=0;a<height;a++){
            if (d[0]!=a){
                    string out = "| ";
                    for (int f=0;f<width;f++){
                        out += board[a][f];
                    }
                    out += " |";
                    cout << out << endl;
                }
            else {
                string output = "| ";
                for (int e=0;e<width;e++){
                    if (e==d[1]){
                        output += "*";
                    }
                    else {
                        output += board[a][e];
                    }
                }
                output += " |";
                cout << output << endl;
            }
        }
        cout << "| - - - |" << endl;
        cout << endl << endl;
    }
    void antBoard::del(string** arry){
        for (int e=0;e<height;e++){
            delete [] arry[e];
        }
        delete [] arry;
    }
