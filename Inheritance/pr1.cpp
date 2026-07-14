#include<iostream>
using namespace std;
class User
{
    protected:
    int id;
    string name;
    string email;
    void getUserData()
    {
        cout<<"Enter id:";
        cin>>id;
        cin.ignore();
        cout<<"Enter name:";
        getline(cin,name);
        cout<<"Enter email:";
        getline(cin,email);
    }
};
class Customer:public User
{
    protected:
    int amt;
    int qty;
    int final;
    
    void getCusData()
    {
        getUserData();
        cout<<"Enter bill amount and quantity:";
        cin>>amt>>qty;
        cin.ignore();
    }
    void calc()
    {
        final=qty*amt;
    }
};
class Premium:public Customer
{
    int disc;
    public:
    void getData()
    {
        getCusData();
        cout<<"Enter discount percent(1-100%):";
        cin>>disc;
        cin.ignore();
    }
    void calcu()
    {
        calc();
        int discamt=final*(disc/100);
        final-=discamt;   
    }
    void disp()
    {
        cout<<"The final amt is :"<<final<<endl;
    }
};
int main()
{
    Premium p;
    p.getData();
    p.calcu();
    p.disp();
    return 0;

}