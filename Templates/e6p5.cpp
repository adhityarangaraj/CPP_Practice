#include <iostream>
using namespace std;
template <class T>
 void swap1(T &a,T &b)
 {
     T temp=a;
     a=b;
     b=temp;
 }
int main() 
{   
    int a,b;
    float a1,b1;
    cout<<"Enter the value for intergers a and b:";
    cin>>a>>b;
    cout<<"Enter the value for float a and b:";
    cin>>a1>>b1;
    cout<<"For integers before swap\n";
    cout<<a<<" "<<b<<"\n";
    swap1(a,b);
    cout<<"For integers after swap\n";
    cout<<a<<" "<<b<<"\n";
    cout<<"For float before swap\n";
    cout<<a1<<" "<<b1<<"\n";
    swap1(a1,b1);
    cout<<"For float after swap\n";
    cout<<a1<<" "<<b1<<"\n";
    return 0;
}