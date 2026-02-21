#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int qtr,dime,nick;
    float cent,dollar;
    cout<<"Enter the number of quaters:";
    cin>>qtr;
    cout<<"Enter the number of dimes:";
    cin>>dime;
    cout<<"Enter the number of nickels:";
    cin>>nick;
    cent=(qtr*25)+(dime*10)+(nick*5);
    dollar=cent/100;
    cout<<"Your charge totals to $"<<fixed<<setprecision(2)<<dollar<<endl;
    return 0;
}
