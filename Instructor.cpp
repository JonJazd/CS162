#include <iostream>
#include "Instructor.hpp"
#include "Person.hpp"
#include <string>

using std::string;
using std::cout;
using std::endl;

double rating;

void Instructor::do_work(){
    int ran = rand() % 8 + 1;
    cout << nameP << " graded papers for " << ran << " hours." << endl;
}
double Instructor::getRating(){
    return this->rating;
}
void Instructor::setRating(double a){
    if (a>=0.0 && a<=5.0){
        rating = a;
    }
}
Instructor::Instructor(string b,double c):Person(b){
    if (c>=0.0 && c<=5.0){
        rating = c;
    } else {
        rating = 0.0;
    }
}
Instructor::~Instructor(){
}