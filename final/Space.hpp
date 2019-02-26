#ifndef Space_HPP
#define Space_HPP
#include <string>
using std::string;

class Space{
    public:
    Space* n;
    Space* w;
    Space* e;
    Space* s;
    string entryLine;
    bool examined;
    bool solved;
    bool endRoom;
    virtual void examine()=0;
    virtual void enter();
    virtual int answerIt(int);
    virtual void unlock(int);
    virtual void setEndRoom();
    virtual void setGiveKey();
    virtual void display()=0;
    virtual void setN(Space*);
    virtual void setS(Space*);
    virtual void setW(Space*);
    virtual void setE(Space*);
    virtual void action()=0;
    virtual void showDirections()=0;
    Space();
    virtual ~Space();
};
#endif