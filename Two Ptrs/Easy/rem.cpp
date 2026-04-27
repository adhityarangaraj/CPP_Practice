#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v={1,0,5,13,13,0,13,80,13,0,13,3};
    int val=13;//assumption
    int write=0;
    for(int read=0;read<v.size();read++)
    {
        if(v[read]!=val)
        {
            v[write]=v[read];
            write++;
            continue;
        }
    }
    for(int i=write;i<v.size();i++)
    {
        v[i]=0;
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}