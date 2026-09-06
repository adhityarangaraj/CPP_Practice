#include<iostream>
using namespace std;

int main()
{
    int arr[11]={2,3,4,5,6,78,7,8,5,3};

    int target=6;
    arr[10]=target;

    for(int i=0;i<10;i++)
    {
        continue;
    }

    return 0;
}