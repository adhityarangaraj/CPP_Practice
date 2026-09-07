#include <iostream>
using namespace std;

class Queue
{
    int arr[10];
    int front;
    int rear;

public:

    Queue()
    {
        front=-1;
        rear=-1;
    }

    bool isEmpty()
    {
        // ...
    }

    bool isFull()
    {
        // ...
    }

    void enqueue(int data)
    {
        if(rear==9)
        {
            return;
        }

        rear++;
        arr[rear]=data;

        if(front==-1)
        {
            front++;
        }

    }

    int dequeue()
    {
        if(front==-1 || rear==-1)
        {
            return -1;
        }

        int temp=arr[front];
        front++;
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }

        return temp;

    }

    int peek()
    {
        // ...
    }

    void display()
    {
        // ...
    }
};