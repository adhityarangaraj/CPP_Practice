#include<iostream>
#include<vector>
using namespace std;
class Test
{
    public:
    void remove(vector<int>&v)
    {
        int write=0;
        for(int read=0;read<v.size();read++)
        {
            
            if(v[read]!=0)
            {
                v[write]=v[read];
                write++;
            }
        }
        for(int i=0;i<write;i++)
        {
            cout<<v[i]<<" "<<endl;
        }
    }

};
int main()
{
    vector<int>v={0,0,2,0,3,1};
    Test t;
    t.remove(v);
    return 0;

}