#include<iostream>
#include<vector>
using namespace std;
class Test
{
    public:
    void dup(vector<int>&v)
    {
        int write=0,read=1;
        for(read=1;read<v.size();read++)
        {
            if(v[write]!=v[read])
            {
                write++;
                v[write]=v[read];
            }
        }
    }
};
int main()
{
    vector<int>v={1,1,1,2,2,3,3,4,5,6,7,7,8,9,23};
    Test t;
    t.dup(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}