#include<iostream>
using namespace std;

void select(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }

        if(i!=min)
        {
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
}

int main()
{
 
    int arr[]={3,6,8,4,3,6,28,89,34};
    int n=sizeof(arr)/sizeof(int);

    select(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}