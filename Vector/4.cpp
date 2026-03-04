#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class  Solution 
{
public:
    void remove(vector<int>&v)
    {
        int right=v.size()-1,left=0,max=-1;
        //sort(v.begin(),v.end());
        while(left<right)
        {
            int wd=right-left,ht;
            if(v[right]>v[left])
            {
                ht=v[left];
                left++;
            }
            else
            {
                ht=v[right];
                right--;
            }
                
            if(max<(wd*ht))
                max=wd*ht;
            
        }
        cout<<max;
        /*for(int i=0;i<=write;i++)
        {
            cout<<v[i]<<" ";
        }*/

    }
};
int main()
{

    vector<int>v= {-1, 0, 1, 2, -1, -4};
    Solution s;
    s.remove(v);
    return 0;
}
