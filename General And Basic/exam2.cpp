#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    {
        f*=i;
    }
    //cout<<f<<endl;
    return f;
}

int main()
{
    int n;
    float x;
    double sine;
    cout<<"Enter x(in radians):";
    cin>>x;
    cout<<"Enter no of terms:";
    cin>>n;
    int sign=1,j=1;
    for(int i=0;i<n;i++)
    {
        
        sine+=sign*(pow(x,j)/fact(j));
        j+=2;
        sign*=-1;
    }
    cout<<"The value of sin("<<x<<") series is:"<<sine<<endl;
   return 0;
}     
