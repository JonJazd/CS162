#ifndef Instructor_HPP
#define Instructor_HPP

#include "Person.hpp"
#include <string>
using std::string;

class Instructor: public Person{
    private:
    double rating;
    public:
    virtual void do_work() override;
    virtual double getRating() override;
    void setRating(double);
    Instructor(string,double);
    ~Instructor();
};

#endif