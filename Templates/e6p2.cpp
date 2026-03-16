#include <iostream>
using namespace std;
template <class T>
 void bubbleSort(T arr[], int n)
 {
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<n-i-1;j++)
         {
             if(arr[j]>arr[j+1])
             {
                 T temp=arr[j];
                 arr[j]=arr[j+1];
                 arr[j+1]=temp;
             }
         }
    }
    cout<<"Sorted Array:\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }
int main() 
{
    int n,n1;
    cout<<"Enter no of elements for integer array:";
    cin>>n;
    int arr[n];
    cout<<"Enter integer array elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Enter no of elements for float array:";
    cin>>n1;
    float arr1[n1];
    cout<<"Enter floating  array elements:\n";
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<endl;
    bubbleSort(arr,n);
    bubbleSort(arr1,n1);
    return 0;
}