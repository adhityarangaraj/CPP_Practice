#include <iostream>
using namespace std;
template <class T>
void max1(T a,T b)
{
    if(a>b)
        cout<<"a="<<a<<" is greater\n";
    else if(a!=b)
        cout<<"b="<<b<<" is greater\n";
}
int main() 
{
    int a,b;
    float a1,b1;
    cout<<"Enter the value for intergers a and b:";
    cin>>a>>b;
    cout<<"Enter the value for float a and b:";
    cin>>a1>>b1;
    cout<<"For integers\n";
    max1(a,b);
    cout<<"For float\n";
    max1(a1,b1);
    return 0;
}