#include <iostream>
#include "Queue.hpp"
#include <string>
using std::cout;
using std::endl;
using std::string;

bool Queue::isEmpty(){
    if (head==nullptr){
        return true;
    } else {
        return false;
    }
}
void Queue::addBack(int a){
    if (this->isEmpty()){
        head = new QueueNode;
        head->prev = head;
        head->next = head;
        head->val = a;
    } else {
        QueueNode* nextOne = head;
        while (nextOne->next!=head){
            nextOne = nextOne->next;
        }
        QueueNode* newNode = new QueueNode;
        nextOne->next = newNode;
        newNode->prev = nextOne;
        newNode->next = head;
        newNode->val = a;
        head->prev = newNode;
    }
}
int Queue::getFront(){
    if (this->isEmpty()){
        return -1;
    }
    return head->val;
}
void Queue::removeFront(){
    if (this->isEmpty()){
        cout << "There is no node to delete. Queue is empty." << endl;
        return;
    }
    QueueNode* del = head;
    if (head->next!=head){
        QueueNode* newHead = head->next;
        QueueNode* nextOne = head;
        while (nextOne->next!=head){
            nextOne = nextOne->next;
        }
        nextOne->next = newHead;
        newHead->prev = nextOne;
        head = newHead;
    } else {
        head = nullptr;
    }
    delete del;
}
void Queue::printQueue(){
    cout << "Your queue is";
    if (this->isEmpty()){
        cout << " empty." << endl;
    } else {
        cout << ": " << head->val << " ";
        QueueNode* nextOne = head->next;
        while (nextOne!=head){
            cout << nextOne->val << " ";
            nextOne = nextOne->next;
        }
        cout << endl;
    }
}
Queue::Queue(){
    head = nullptr;
}
Queue::~Queue(){
    if (!this->isEmpty()){
        QueueNode* last = head->prev;
        QueueNode* secondLast = last->prev;
        while (secondLast!=head){
            delete last;
            last = secondLast;
            secondLast = last->prev;
        }
        if (last!=head){
            delete last;
        }
        delete head;
    }
}