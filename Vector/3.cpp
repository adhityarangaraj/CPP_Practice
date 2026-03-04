#include<iostream>
#include<vector>
using namespace std;
class  Solution 
{
public:
    void remove(vector<int>&v)
    {
        int read=1,write=0;
        for(int read=1;read<v.size();read++)
        {
            if(v[read]!=v[write])
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
    vector<int>v={1,2,2,2,3,3,4,5,5,11,11,28,32};
    Solution s;
    s.remove(v);
    return 0;
}