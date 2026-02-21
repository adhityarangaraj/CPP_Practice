#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,e=0,o=0;
    cout<<"Enter no of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
            e++;
        else
            o++;
    }
    cout<<"Even numbers count="<<e<<endl;
    cout<<"Odd numbers count="<<o<<endl;
    return 0;
}
