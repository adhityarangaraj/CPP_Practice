#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Test
{
    public:
    void sq(vector<int>&v)
    {
        for(int i=0;i<v.size();i++)
        {
            v[i]*=v[i];
        }
        sort(v.begin(),v.end());
    }
};

int main()
{
    vector<int>v={-4,-1,0,3,5};
    Test t;
    t.sq(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}
