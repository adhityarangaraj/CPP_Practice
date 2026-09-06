#include<iostream>
using namespace std;

struct node
{
    char data;
    node*link;
};

struct headnode
{
    int count;
    node*head;
};

class SLL
{
    headnode*list;

    public:
    SLL()
    {
        list=new headnode();
        list->count=0;
        list->head=NULL;
    }

    void insert(char d)
    {

        if(!(d>='a' && d<='z'|| d>='A'&& d<='Z'))
        {
            cout<<"Entered character is not an alphabet\nTry again\n";
            return;
        }

        node*nn=new node();
        nn->data=d;
        node*temp=list->head;
        node*prev=NULL;
        list->count++;

        if(temp==NULL)
        {
            nn->link=NULL;
            list->head=nn;
            return;
        }

        else if(temp->data>d)
        {
            nn->link=list->head;
            list->head=nn;
            return;
        }

        while(temp!=NULL && temp->data<d)
        {
            prev=temp;
            temp=temp->link;
        }

        nn->link=prev->link;
        prev->link=nn;
    }

    int count()
    {
        node*temp=list->head;
        int count;

        while(temp!=NULL)
        {
            char lowerCh=tolower(temp->data);

            if(lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u')
            {
                count++;
            }

            temp=temp->link;
        }

        return count;
    }

    void print()
    {
        node*temp=list->head;

        while(temp!=NULL)
        {
            if(isupper(temp->data))
            {
                cout<<temp->data<<" ";
            }
        }
        cout<<"\n";
    }

};

int main()
{
    return 0;
}