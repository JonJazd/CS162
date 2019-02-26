#include <iostream>
#include "Person.hpp"
#include <string>
#include <cstdlib>

using std::string;
using std::cout;
using std::endl;

string nameP;
int age;

void Person::do_work(){
    int ran = rand() % 8 + 1;
    cout << nameP << " works for " << ran << " hours" << endl;
}
double Person::getGPA(){
    return -0.2;
}
double Person::getRating(){
    return -0.2;
}
string Person::getName(){
    return nameP;
}
int Person::getAge(){
    return age;
}
void Person::setName(string a){
    nameP = a;
}
void Person::setAge(int b){
    age = b;
}
Person::Person(string c){
    nameP = c;
    age = rand() % 40 + 20;
}
/*Person::Person(){
    nameP= " ";
    age = 0;
}*/
Person::~Person(){
}