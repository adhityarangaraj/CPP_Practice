//COLUMN 6
#include<iostream>
using namespace std;
int main()
{
    int bas,ded;
    float da,hra,gpay,npay;
    cout<<"Enter basic salary of an employee:";
    cin>>bas;
    if(bas>=10000)
    {
        da=0.9*bas;
        hra=0.2*bas;
        ded=1000;
    }
    else if(bas>=5000&&bas<10000)
    {
        da=0.8*bas;
        hra=0.15*bas;
        ded=750;
    }
    else if(bas<5000)
    {
        da=0.7*bas;
        hra=0.1*bas;
        ded=500;
    }
    else
    {
        cout<<"Invalid or Negative Basic Salary\n";
    }
    gpay=bas+da+hra;
    npay=gpay-ded;
    cout<<"Gross Salary:"<<gpay<<endl;
    cout<<"Net Pay:"<<npay<<endl;
    return 0;
 }
