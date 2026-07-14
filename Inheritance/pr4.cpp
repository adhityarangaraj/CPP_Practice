#include<iostream>
using namespace std;
class Ship
{
    protected:
    int id;
    float wt;
    float dist;
    public:
    void get()
    {
        cout<<"Enter id:";
        cin>>id;
        cout<<"Enter wt and distance:";
        cin>>wt>>dist;
        cin.ignore();
    }
    virtual void calc()
    {

    }
};
class Road:public Ship
{
    public:
    float toll;
    float total;
    void getRoad(){
        get();
        cout<<"Enter toll charges:";
        cin>>toll;
        cin.ignore();
    }
    void calc() override
    {
        total=wt*dist*toll;
    }
};
int main()
{
    Ship* ptr;
    Road r;
    ptr=&r;
    r.getRoad();
    ptr->calc();
    return 0;
}
