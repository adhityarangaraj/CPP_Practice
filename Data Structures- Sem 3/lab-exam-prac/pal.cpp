#include<iostream>
using namespace std;

struct node
{
    char data;
    node*link;
};

struct headnode_stack
{
    int count;
    node*top;
};

struct headnode_queue
{
    int count;
    node*front;
    node*rear;
};

class Stack
{
    headnode_stack*list;
    public:
    Stack()
    {
        list=new headnode_stack();
        list->count=0;
        list->top=NULL;
    }

    void push(char c)
    {
        node* nn=new node();
        nn->data=c;

        nn->link=list->top;
        list->top=nn;
        list->count++;
    }

    char pop()
    {
        node*temp=list->top;

        if(temp==NULL)
        {
            cout<<"Empty Stack\n";
            return '\0';
        }

        list->top=temp->link;
        list->count--;

        char c=temp->data;
        delete temp;
        return c;
    }

};

class Queue
{
    headnode_queue*list;
    public:
    Queue()
    {
        list=new headnode_queue();
        list->count=0;
        list->front=NULL;
        list->rear=NULL;
    }

    void enqueue(char c)
    {
        node* nn=new node();
        nn->data=c;

        if(list->front==NULL)
        {
            list->front=nn;
        }
        else
        {
            list->rear->link=nn;
        }
        
        nn->link=NULL;
        list->rear=nn;
        list->count++;
    }

    char dequeue()
    {
        node*temp=list->front;
        if(temp==NULL)
            return '\0';

        list->front=temp->link;

        if(list->front==NULL)
            list->rear=NULL;

        char c=temp->data;
        delete temp;
        return c;
    }

};

int main()
{
    Stack s;
    Queue q;
    string str1="this is a test string";
    string str="madam";

    for(char ch:str)
    {
        s.push(ch);
        q.enqueue(ch);
    }

    for(int i=0;i<str.length();i++)
    {
        if(s.pop()==q.dequeue())
            continue;
        else
        {
            cout<<"Not palindrome\n";
            return 0;
        }
    }

    cout<<"palindrome\n";
    return 0;
}