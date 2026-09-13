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
    node*head;
    node*rear;
};

class DLL
{  
    headnode*list;
   
    public:
    DLL()
    {
        list=new headnode();
        list->count=0;
        list->head=NULL;
        list->rear=NULL;
    }
   
    bool insert(int data)
    {
        node*nn=new node();
        nn->data=data;
        node*temp=list->head;
        node*prev=NULL;
       
        while(temp!=NULL && data>temp->data)
        {
            prev=temp;
            temp=temp->fore;
        }
       
        if(prev==NULL)
        {
            nn->fore=list->head;
            nn->back=NULL;
           
            if(list->head!=NULL)
            {
                list->head->back=nn;
            }
            else
            {
                list->rear=nn;
            }
           
            list->head=nn;
            list->count++;
            return true;
        }
       
        else
        {
            nn->back=prev;
            nn->fore=prev->fore;
            prev->fore=nn;
           
            if(temp!=NULL)
            {
                temp->back=nn;
            }
            else
            {
                list->rear=nn;
            }
           
            list->count++;
            return true;
        }
       
        return false;
    }
   
    bool delete_dll(int data)
    {
        node*temp=list->head;
       
        while(temp!=NULL && data>=temp->data)
        {
            if(temp->data==data)
            {
                if(temp->back==NULL)
                {
                    list->head=temp->fore;
                }
                else
                {
                    temp->back->fore=temp->fore;
                }
               
                if(temp->fore!=NULL)
                {
                    temp->fore->back=temp->back;
                }
                else
                {
                    list->rear=temp->back;
                }
                   
                list->count--;
                delete temp;
                return true;  
            }
           
            temp=temp->fore;
        }
       
        return false;
    }
   
    bool emptydll()
    {
        return list->count==0;  
    }
   
    int count()
    {
        return list->count;
    }
   
    void display_htor()
    {
        node*temp=list->head;
       
        cout<<"HEAD TO REAR:\n";
       
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->fore;
        }
       
        cout<<"NULL\n";
    }
   
    void display_rtoh()
    {
        node*temp=list->rear;
       
        cout<<"REAR TO HEAD:\n";
       
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->back;
        }
       
        cout<<"NULL\n";
    }
   
    bool search_htor(int data,int& pos)
    {
        node*temp=list->head;
        int count=0;
       
        while(temp!=NULL && temp->data<=data)
        {
            if(temp->data==data)
            {
                pos=count;
                return true;
            }
           
            temp=temp->fore;
            count++;
        }
       
        pos=-1;
        return false;
    }
   
    bool search_rtoh(int data,int& pos)
    {
        node*temp=list->rear;
        int count=(list->count)-1;
       
        while(temp!=NULL && temp->data>=data)
        {
            if(temp->data==data)
            {
                pos=count;
                return true;
            }
           
            temp=temp->back;
            count--;
        }
       
        pos=-1;
        return false;
    }
   
    void destroy()
    {
        node*temp=list->head;
        node*temp1=NULL;
       
        while(!emptydll())
        {
            temp1=temp->fore;
            delete temp;
            temp=temp1;
            list->count--;
        }
       
        list->head=NULL;
        list->rear=NULL;
    }
};

int main()
{
    int ch;
    DLL*l=NULL;
   
    do
    {
        cout<<"\n1.Create\n2.Insert\n3.Delete\n4.Searchfromhead\n5.Searchfromrear\n6.Count\n7.EmptyList\n8.Displayfromhead\n9.Displayfromrear\n10.Destroy\n11.Exit\nOption:";
       
        cin>>ch;
        cout<<"\n";
       
        if(ch<1 || ch>11)
        {
            cout<<"Invalid choice\n";
            continue;
        }
       
        if(ch!=1 && l==NULL)
        {
            cout<<"Create the list first\n";
            continue;
        }
           
        switch(ch)
        {
            case 1:
            {
                if(l!=NULL)
                {
                    cout<<"List already exists\n";
                }
                else
                {
                    l=new DLL();
                    cout<<"List created successfully\n";
                }
               
                break;
            }
           
            case 2:
            {
                int temp;
                cout<<"Enter data to be inserted:";
                cin>>temp;
               
                if(l->insert(temp))
                {
                    cout<<temp<<" inserted successfully\n";
                }
                else
                {
                    cout<<"Insertion failed(Memory Not Available)\n";
                }
                   
                break;
            }
           
            case 3:
            {
                int data;
                cout<<"Enter data to be deleted:";
                cin>>data;
               
                if(l->delete_dll(data))
                {
                    cout<<"Element deleted successfully\n";
                }
                else
                {
                    cout<<"Element not found in the list\n";
                }
               
                break;
            }
           
            case 4:
            {
                int data,pos;
                cout<<"Enter element to be searched:";
                cin>>data;
               
                if(l->search_htor(data,pos))
                {
                    cout<<data<<" is found at position:"<<pos<<endl;
                }
               
                else
                {
                    cout<<data<<" not present in the list"<<endl;
                }
               
                break;
            }
           
            case 5:
            {
                int data,pos;
                cout<<"Enter element to be searched:";
                cin>>data;
               
                if(l->search_rtoh(data,pos))
                {
                    cout<<data<<" is found at position:"<<pos<<endl;
                }
               
                else
                {
                    cout<<data<<" not present in the list"<<endl;
                }
               
                break;
            }
             
            case 6:
            {
                cout<<"No of elements in the DLL is:"<<l->count()<<endl;
                break;
            }
             
            case 7:
            {
                if(l->emptydll())
                {
                    cout<<"List is empty(TRUE)\n";
                }
                else
                {
                    cout<<"List is not empty(FALSE)\n";
                }
                   
                break;
            }
             
            case 8:
            {
                l->display_htor();
                break;
            }
             
            case 9:
            {
                l->display_rtoh();
                break;
            }    
             
            case 10:
            {
                l->destroy();
                cout<<"List is destroyed successfully\n";
                break;
            }
        }
       
    }while(ch!=11);
   
    return 0;
}
