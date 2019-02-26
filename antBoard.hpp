#ifndef antBoard_HPP
#define antBoard_HPP
#include <string>
using std::string;


class antBoard{
    public:
    string** board;
    int height;
    int width;
    void colorChange(int[]);
    void print(int[]);
    void del(string**);
    antBoard(int,int);
};

#endif
