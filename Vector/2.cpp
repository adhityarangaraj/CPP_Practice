#include<iostream>
#include<vector>
using namespace std;
class Test
{
    public:
    void remove(vector<int>&v,int val)
    {
        int read=1,write=-1;
        for(read=0;read<v.size();read++)
        {
            if(v[read]!=val)
            {
                write++;
                v[write]=v[read];
            }
        }
        for(int i=0;i<=write;i++)
        {
            cout<<v[i]<<" ";
        }
    }
};
int main()
{
    int val=3;
    vector<int>v={2,3,3,6,7,8};
    Test s;
    s.remove(v,val);
    return 0;
}