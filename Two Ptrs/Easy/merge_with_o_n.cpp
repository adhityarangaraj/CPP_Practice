#include<iostream>
using namespace std;
class Test
{
    public:
    void sol(int arr1[],int arr2[])
    {
        int i=5,j=5,k=11;
        for(int k=11;k>=0;k--)
        {
            
            if(arr1[i]>=arr2[j]||j<0)
            {
                arr1[k]=arr1[i];
                i--;
            }
            else if(arr2[j]>=arr1[i]||i<0)
            {
                arr1[k]=arr2[j];
                j--;
            }
        }
        for(int i=0;i<12;i++)
        {
            cout<<arr1[i]<<" ";
        }
    }
};
int main()
{
    int arr1[12]={2,3,4,5,6,9};
    int arr2[6]={2,4,5,7,8,17};
    Test t;
    t.sol(arr1,arr2);
   
    return 0;
}
