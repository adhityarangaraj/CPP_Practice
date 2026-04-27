#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v={1,0,5,0,80,1,0,3};
    int write=0,read=0;
    for(read;read<v.size();read++)
    {
        if(v[read]!=0)
        {
            v[write]=v[read];
            write++;
            continue;
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}