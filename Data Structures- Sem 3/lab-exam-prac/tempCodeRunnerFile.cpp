#include <iostream>
using namespace std;

void merge(int arr[],int low,int mid,int high)
{
    int n1=(mid-low)+1;
    int n2=(high-mid);

    int arr1[n1];
    int arr2[n2];

    for(int i=0;i<n1;i++)
    {
        arr1[i]=arr[low+i];
    }

    for(int j=0;j<n2;j++)
    {
        arr2[j]=arr[mid+1+j];
    }

    int i=0,j=0;
    for(int k=low;k<=high;k++)
    {
        if(i>=n1)
        {
            arr[k]=arr2[j];
            j++;
        }

        else if(j>=n2)
        {
            arr[k]=arr1[i];
            i++; 
        }

        else if(arr1[i]<arr2[j])
        {
            arr[k]=arr1[i];
            i++;
        }

        else
        {
            arr[k]=arr2[j];
            j++;
        }


    }

}

void merge_sort(int arr[],int low,int high)
{
    if(low>=high)
        return;

    int mid=(low+high)/2;

    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);

    merge(arr,low,mid,high);
}

int main()
{
    int arr[]={3,6,8,4,3,6,28,89,34};
    int n=sizeof(arr)/sizeof(int);
    merge_sort(arr,0,n-1);

    for(int i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}