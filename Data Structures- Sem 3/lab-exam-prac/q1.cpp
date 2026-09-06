#include <iostream>
using namespace std;

struct node
{
    int no;
    node*link;
};

struct headnode
{
    int count;
    node*front;
    node*rear;
};

class Document
{
    headnode*list;
    Document()
    {
        list=new headnode();
        list->count=0;
        list->front=NULL;
        list->rear=NULL;
    }

    void add(int pages)
    {
        node*nn=new node();
        nn->no=pages;
        nn->link=NULL;
        if(list->rear!=NULL)
            list->rear->link=nn;

        if(list->front==NULL)
            list->front=nn;
    
        list->rear=nn;
        list->count++;
    }

    void print()
    {
        node*temp=list->front;

        if(temp!=NULL)
            list->front=temp->link;

        if(temp==list->rear)
        {
            list->rear=NULL;
            list->count=0;
            return;
        }

        list->count--;
        delete temp;

    }
};

int main()
{
    return 0;
}
