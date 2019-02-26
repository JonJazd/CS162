#ifndef Person_HPP
#define Person_HPP
#include <string>
using std::string;

class Person{
    private:
    int age;
    public:
    string nameP;
    virtual void do_work();
    virtual double getGPA();
    virtual double getRating();
    string getName();
    int getAge();
    void setName(string);
    void setAge(int);
    Person(string);
    //Person();
    ~Person();
};

#endif