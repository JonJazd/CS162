#include <iostream>
#include "menu.hpp"
#include "Queue.hpp"
using std::cout;
using std::endl;

int main(){
    Queue queue;
    menu men;
    int choice = -1;
    while (choice!=0 && choice!=404){
        choice = men.start();
        if (choice==1){
            int choice2 = men.info();
            queue.addBack(choice2);
        } else if (choice==2){
            if (queue.getFront()!=-1){
                cout << "Front value is: " << queue.getFront() << endl;
            } else{
                cout << "There is no front value. Queue is empty." << endl;
            }
        } else if (choice==3){
            queue.removeFront();
        } else if (choice==4){
            queue.printQueue();
        } else if (choice==0 || choice ==404){
            return 0;
        }
    }
}