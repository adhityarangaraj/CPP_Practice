#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Test
{
    public:
    void merge(vector<int>&v,vector<int>&v1)
    {
        for(int i=0;i<v1.size();i++)
        {
            v.push_back(v1[i]);
        }
        sort(v.begin(),v.end());
    }
};
int main()
{
    vector<int>v={1,2,3,4,5};
    vector<int>v1={2,4,6,9,9,10,10};
    Test t;
    t.merge(v,v1);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return 0;
}