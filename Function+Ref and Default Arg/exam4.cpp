//COLUMN 6
#include<iostream>
using namespace std;
void getInput(int &base,int &exp)
{
    cout<<"Enter the base:";
    cin>>base;
    cout<<"Enter the exponent:";
    cin>>exp;
}
int calculatePower(int base,int exp=2)
{
    int res=1;
    for(int i=0;i<exp;i++)
    {
        res=res*base;
    }
    return res;
}
int main()
{
    int base,exp;
    getInput(base,exp);
    cout<<"The result With user given value is:"<<calculatePower(base,exp)<<endl;//With user given
    cout<<"The result With def arg is:"<<calculatePower(base)<<endl;//With def arg
    return 0;
}
