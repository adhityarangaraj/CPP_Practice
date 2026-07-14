#include<iostream>
using namespace std;
class Apartment
{
    protected:
    int type;
    int sq_ft;
    float base;
    public:
    Apartment(float b=1500):base(b)
    {

    }
    void get_type()
    {
        cout<<"Enter 1 for 1BHK ,2 for 2BHK etc:";
        cin>>type;
        cin.ignore();
        if(type==1)
            sq_ft=800;
        else if(type==2)
            sq_ft=1200;
        else if(type==3)
            sq_ft=1500;
        else
        {
            cout<<"Wrong no entered try again!!\n";
            return;
        }
    }
};
class Amenities: public Apartment
{
    protected:
    string mode;
    string cmft;
    float mode1;
    float cmft1;
    public:
    void get()
    {
        cout<<"Enter mode:";
        getline(cin,mode);
        cout<<"Enter comfort:";
        getline(cin,cmft);
        if(mode=="Unfurnished")
            mode1=0;
        else if(mode=="Semi-Furnished")
            mode1=0.1;
        else if(mode=="Fully-Furnished")
            mode1=0.15;
        if(cmft=="Standard")
            cmft1=0;
        else if(cmft=="Premium")
            cmft=0.2;
        else if(cmft=="Luxury")
            cmft=0.3;
        
    }

};
class Buyrate:public Amenities
{
    float bill;
    public:
    void get()
    {
        get_type();
        Amenities::get();
    }
    void calc()
    {
        bill=sq_ft*mode1*cmft1;
        cout<<"Buy Rate is :"<<bill<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter the no of objects u want to create:";
    cin>>n;
    Buyrate b[n];
    for(int i=0;i<n;i++)
    {
        b[i].get();
        b[i].calc();
    }
    return 0;
}