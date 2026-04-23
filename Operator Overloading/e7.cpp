#include<iostream>
using namespace std;
class Bank
{
    int acc;
    string name;
    float bal;
    public:
    Bank()
    {

    }
    Bank(string name1,int accn,float bala)
    {
        name=name1;
        acc=accn;
        bal=bala;
    }
    void operator +=(int amt)
    {
        if(amt>0)
            bal+=amt;
    }
    void operator -=(int amt)
    {
        if(amt<=bal&&amt>0)
        {
            bal-=amt;
        }
        else
        {
            cout<<"Insuffient balance to withdraw from!!\n";
        }
    }
    void disp()
    {
        cout<<"The updated balance is:"<<bal<<endl;
    }
};
int main()
{
    Bank b("Adhit",1234687,40000);
    int ch;
    cout<<"Do u want to deposit or withdraw:\nPress 1 for deposit and\nPress 2 to withdraw\n:";
    cin>>ch;
    switch(ch)
    {
        case 1:
        {
            int amt;
            cout<<"Enter the amt to deposit:";
            cin>>amt;
            b+=amt;
            break;
        }
        case 2:
        {
            int amt;
            cout<<"Enter the amt to withdraw:";
            cin>>amt;
            b-=amt;
            break;
        }
        default:
        {
            cout<<"Invalid choice!!Try again\n";
            break;
        }
    }
    b.disp();
    return 0;
}