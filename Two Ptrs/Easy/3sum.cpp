#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v={-1,2,1,0,3,4,-4,-2};
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v.size();j++)
        {
            for(int k=0;k<v.size();k++)
            {
                if(k!=i&&k!=j)
                {
                    if(v[i]+v[j]+v[k]==0)
                        cout<<v[i]<<" "<<v[j]<<" "<<v[k]<<endl;

                }
                else
                    continue;
            }
        }
    }
    return 0;
}
