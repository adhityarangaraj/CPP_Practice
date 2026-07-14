#include<iostream>
using namespace std;
int main()
{
    int arr[2][2]={1,2,3,4};
    int arr1[2][3]={1,2,3,4,5,6};
    int res[2][3];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<2;k++)
            {
                res[i][j]+=(arr[i][k]*arr1[k][j]);
            }
        }
    }
}