#include<iostream>
using namespace std;
void sort(int arr1[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
            {
                if(arr1[j]>arr1[j+1])
                {
                    int temp=arr1[j];
                    arr1[j]=arr1[j+1];
                    arr1[j+1]=temp;
                 }
             }
    }}
 void sort(float arr2[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
            {
                if(arr2[j]>arr2[j+1])
                {
                    float temp=arr2[j];
                    arr2[j]=arr2[j+1];
                    arr2[j+1]=temp;
                 }
             }
    }}
    void sort(char arr3[],int n)
{
    for(int i=0;i<n-1;i++)
    {
            for(int j=0;j<n-1-i;j++)
            {
                if(arr3[j]>arr3[j+1])
                {
                    char temp=arr3[j];
                    arr3[j]=arr3[j+1];
                    arr3[j+1]=temp;
                 }
             }
    }
}
void print(int arr[],int n)
{
    cout<<"The elements are[After Sorting]:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
     }
  }
  
void print(float  arr[],int n)
{
    cout<<"The elements are[After Sorting]:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
     }
  }
  
int main()
{
    int ch,n;
    int arr1[15];
    float arr2[20];
    char arr3[30];
    cout<<"Menu:\n1. Integer \n2. Float\n3. Character\n4. Exit\nChoose type:";
    cin>>ch;
    switch(ch)
    {
        case 1: 
        {cout<<"Enter no of elements of array:";
        cin>>n;
        
        cout<<"Enter the elements:\n";
        for(int i=0;i<n;i++)
            cin>>arr1[i];
         sort(arr1,n);
         print(arr1,n);
         break;}
       case 2:
       {cout<<"Enter no of elements of array:";
        cin>>n;
        
        cout<<"Enter the elements:\n";
        for(int i=0;i<n;i++)
            cin>>arr2[i];
         sort(arr2,n);
         print(arr2,n);
         break;}
         case 3:
         {cout<<"Enter no of lettters  of array:";
        cin>>n;
        cout<<"Enter the word:";
        cin>>arr3;
         sort(arr3,n);
         cout<<arr3<<endl;
         break;}
         case 4:
         {
            cout<<"Exitting!!\n";
            break;
          }
          default:
          {
          cout<<"Invalid choice\n";
          break;
          }
          }
          return 0;
         }
       
    
