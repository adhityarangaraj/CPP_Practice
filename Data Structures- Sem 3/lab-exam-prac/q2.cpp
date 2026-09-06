#include<iostream>
using namespace std;

struct node
{
    int data;
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

    void insert(int data)
    {
        node*nn=new node();
        nn->data=data;

        if(data%2==0)
        {
            nn->link=list->head;
            list->head=nn;
        }

        else
        {
            node*prev=NULL;
            node*temp=list->head;
            nn->link=NULL;

            if(temp==NULL)
            {
                list->head=nn;
                list->count++;
                return;
            }

            while(temp!=NULL)
            {
                prev=temp;
                temp=temp->link;
            }

            prev->link=nn;
        }

        list->count++;
    }

    void remove()
    {
        node*temp=list->head;
        node*prev=NULL;

        while(temp!=NULL)
        {
            if(temp->data%3==0)
            {
                
                node*temp1=temp->link;

                if(prev!=NULL)
                {
                   prev->link=temp1; 
                }

                else
                {
                    list->head=temp1;
                }
                
                prev=temp;
                delete temp;
                temp=temp1;
                list->count--;
            }

            else
            {
                prev=temp;
                temp=temp->link;
            }
            
        }
    }

    void display()
    {
        node*temp=list->head;

        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->link;
        }
        cout<<"\n";
    }
};
int main()
{
    SLL*s=new SLL();
    int n=5;
    int val;
    for(int i=0;i<n;i++)
    {
        cin>>val;
        s->insert(val);
    }

    s->display();
    s->remove();
    s->display();

    return 0;
}