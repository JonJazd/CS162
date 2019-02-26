#ifndef Building_HPP
#define Building_HPP
#include <string>
using std::string;

class Building{
    private:
    string nameB;
    int size;
    string address;
    public:
    string getName();
    int getSize();
    string getAddress();
    void setAddress(string);
    void setName(string);
    void setSize(int);
    Building(string,int,string);
    Building();
    ~Building();
};

#endif