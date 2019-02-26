#include <iostream>
#include "Building.hpp"
#include <string>

using std::string;

string nameB;
int size;
string address;

string Building::getName(){
    return nameB;
}
int Building::getSize(){
    return size;
}
string Building::getAddress(){
    return address;
}
void Building::setName(string a){
    nameB = a;
}
void Building::setSize(int b){
    size = b;
}
void Building::setAddress(string c){
    address = c;
}
Building::Building(string d,int e,string f){
    nameB = d;
    size = e;
    address = f;
}
Building::Building(){
    nameB = " ";
    size = 0;
    address = " ";
}
Building::~Building(){
}
