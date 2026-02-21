//COLUMN 6
#include<iostream>
using namespace std;
void BestofTwoCia(int cia1[],int cia2[],int res[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(cia1[i]>cia2[i])
        res[i]=cia1[i];
        else if(cia1[i]<cia2[i])
        res[i]=cia2[i];
        else if(cia1[i]==cia2[i])
        res[i]=cia1[i];
    }
 }
 
int main()
{
    int n;
    cout<<"Enter no of students:";
    cin>>n;
    int cia1[n],cia2[n],res[n];
    cout<<"Enter CIA-I MARKS:\n";
    for(int i=0;i<n;i++)
    {
        cin>>cia1[i];
    }
    cout<<"Enter CIA-II MARKS:\n";
    for(int i=0;i<n;i++)
    {
        cin>>cia2[i];
    }
    BestofTwoCia(cia1,cia2,res,n);    
    cout<<"The resultant best cia of each student is:\n";
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
 }
