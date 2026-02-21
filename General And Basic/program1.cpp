#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x,s=0;
    cout<<"Enter a number:";
    cin>>x;
    for(int i=1;i<=x/2;i++)
    {
        if(x%i==0)
        {
            s+=i;
            
        }
    }
    
    if(s==x)
        cout<<x<<" is a perfect no\n";
    else
        cout<<x<<" is not a perfect no\n";
    return 0;
}
