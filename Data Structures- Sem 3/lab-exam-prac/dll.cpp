#include<iostream>
using namespace std;

struct node
{
    int data;
    node*fore;
    node*back;
};

struct headnode
{
    int count;
    node*front;
    node*rear;
};

class DLL
{
    headnode*list;

    DLL()
    {
        list=new headnode();
        list->count=0;
        list->front=NULL;
        list->rear=NULL;
    }

    void insert(int data)
    {
        node*temp=list->front;
        node*prev=NULL;
        node*nn=new node();
        nn->data=data;

        list->count++;

        if(temp==NULL)
        {
            list->front=nn;
            list->rear=nn;
            nn->back=NULL;
            nn->fore=NULL;
            return;
        }

        else if(temp->data>data)
        {
            nn->fore=list->front;
            list->front=nn;
            nn->back=NULL;
            return;
        }

        while(temp!=NULL && temp->data<data)
        {
            prev=temp;
            temp=temp->fore;
        }

        nn->fore=prev->fore;
        prev->fore=nn;
        nn->back=prev;
        nn->fore->back=nn;

    }

    bool delete_dll(int data)
    {
        node*temp=list->front;
        node*prev=NULL;

        if(temp==NULL)
            return false;

        else if(temp->data==data)
        {
            list->front=temp->fore;
            temp->fore->back=NULL;
            delete temp;
            list->count--;
            return true;
        }

        while(temp!=NULL)
        {
            if(temp->data==data)
            {
                prev->fore=temp->fore;
                temp->fore->back=prev;
                list->count--;
                delete temp;
                return true;
            }
            temp=temp->fore;
            prev=temp;
        }
        return false;
    }
};
