#include<iostream>
using namespace std;
class Cargo
{
    protected:
    int id;
    float wt;
    string dest;
    float charge;

    void getCargo()
    {
        cout<<"Enter id:";
        cin>>id;
        cout<<"Enter weight:";
        cin>>wt;
        cin.ignore();
        cout<<"Enter destination:";
        getline(cin,dest);
    }
    void calc1()
    {
        int rate;
        int dist;
        cout<<"Enter rate per kg:";
        cin>>rate;
        cout<<"Enter distance:";
        cin>>dist;
        cin.ignore();
        charge=wt*rate*dist;
    }

};
class Fridge
{
    protected:
    string temp;
    float coolcap;
    float powercons;
    float fridgecharge;

    void get()
    {
        cout<<"Enter temp range:";
        getline(cin,temp);
        cout<<"Enter cooling capacity(in tons) and power consumption:";
        cin>>coolcap>>powercons;
        cin.ignore();
    }
    void calc2()
    {
        int rate;
        cout<<"Enter rate per ton:";
        cin>>rate;
        cin.ignore();
        fridgecharge=rate*coolcap;
    }
};
class FridgeCargo:public Cargo,public Fridge
{
    int final;
    string date;
    public:
    void get()
    {
        getCargo();
        Fridge::get();
        cout<<"Enter shipment date:";
        getline(cin,date);
    }
    void calc()
    {
        calc1();
        calc2();
        final=charge+fridgecharge;
    }
    void disp()
    {
        cout<<"The total bill is:"<<final<<endl;
    }
};
int main()
{
    FridgeCargo f;
    f.get();
    f.calc();
    f.disp();
    return 0;
}
