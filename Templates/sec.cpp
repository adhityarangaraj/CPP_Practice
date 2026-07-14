#include<iostream>
using namespace std;
template <class T>
T second(T arr[],int n)
{
    T max=0,max2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max2=max;
            max=arr[i];
        }
        else if(arr[i]>max2)
        {
            max2=arr[i];
        }
    }
    return max2;
}
int main()
{
    int arr[]={2,4,5,7,8};
    float arr1[]={3.45,6.78,9,87};
    cout<<second<int>(arr,5);
    cout<<second<float>(arr1,3);
    return 0;
}
