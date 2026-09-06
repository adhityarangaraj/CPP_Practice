#include<iostream>
using namespace std;

struct Student
{
    string name;
    int marks;
};


class Stack
{
    Student s[10];
    int top;
    public:

    Stack()
    {
        top=-1;
    }

    void push(Student a)
    {
        if(top!=10)
        {
            top++;
            s[top].name=a.name;
            s[top].marks=a.marks;
        }

        else
        {
            cout<<"Stack is full\n";
        }
    }

    void pop()
    {
        if(top==-1)
            cout<<"STACK EMPTY!!\n";
        top--;
    }

    void search(Student key)
    {
        for(int i=top;i<10;i++)
        {
            if(s[i].name==key.name)
            {
                cout<<"Student is present \n";
            }

            else
                cout<<"Absent\n";
        }
    }

};
int main()
{
    Student s[10];

}