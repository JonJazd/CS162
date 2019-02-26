#ifndef Student_HPP
#define Student_HPP
#include "Person.hpp"
#include <string>
using std::string;

class Student: public Person{
    private:
    double GPA;
    public:
    virtual void do_work() override;
    virtual double getGPA() override;
    void setGPA(double);
    Student(string,double);
    ~Student();
};

#endif