#include<iostream>
using namespace std;

void insert(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && temp<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=temp;
    }
}

int main()
{
 
    int arr[]={3,6,8,4,3,6,28,89,34};
    int n=sizeof(arr)/sizeof(int);

    insert(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}