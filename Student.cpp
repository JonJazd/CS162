#include <iostream>
#include "Student.hpp"
#include "Person.hpp"
#include <string>

using std::string;
using std::cout;
using std::endl;

double GPA;

void Student::do_work(){
    int ran = rand() % 8 + 1;
    cout << nameP << " does " << ran << " hours of homework." << endl;
}
double Student::getGPA(){
    return this->GPA;
}
void Student::setGPA(double a){
    if (a >=0.0 && a<=4.0){
        GPA = a;
    }
}
Student::Student(string b,double c):Person(b){
    if (c >=0.0 && c<=4.0){
        GPA = c;
        cout << "GPA = " << this->getGPA() << endl;
    } else {
        GPA = 0.0;
    }
}
Student::~Student(){
}