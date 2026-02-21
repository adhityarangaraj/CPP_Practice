#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int r,c,rs=0,cs=0;
    
    cout<<"Enter rows and columns:";
    cin>>r>>c;
    int arr[r][c];
    cout<<"Enter matrix elements:\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
     
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            rs+=arr[i][j];
        }
        cout<<"Row "<<i+1<<" Sum="<<rs<<endl;
        rs=0;
   }
   int j=0;
   while(j<c)
       {
       for(int i=0;i<r;i++)
           {
                cs+=arr[i][j];
           }
       cout<<"Column "<<j+1<<" Sum="<<cs<<endl;
       j++;
       cs=0;
       }
  
    return 0;
}
