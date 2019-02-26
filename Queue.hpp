#ifndef Queue_HPP
#define Queue_HPP

class Queue{
    private:
    struct QueueNode{
        QueueNode* next;
        QueueNode* prev;
        int val;
    };
    QueueNode* head;
    public:
    bool isEmpty();
    void addBack(int);
    int getFront();
    void removeFront();
    void printQueue();
    Queue();
    ~Queue();
};

#endif