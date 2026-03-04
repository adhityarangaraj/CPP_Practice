#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class  Solution 
{
public:
    void remove(vector<int>&v)
    {
        
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-2;i++)
        {
            int left=i+1,right=v.size()-1;
            while(left<right)
            {
            if(left==i)
                left++;
            else if(right==i)
                right--;
            
            int sum=v[i]+v[left]+v[right];
            if(sum>0)
            {
                right--;
            }
            else if(sum<0)
            {
                left++;
            }
            else if(sum==0)
            {
                cout<<"["<<v[i]<<v[left]<<v[right]<<"]";
                left++;
                right--;
            }
            }
            
        }
        
        /*for(int i=0;i<=write;i++)
        {
            cout<<v[i]<<" ";
        }*/

    }
};
int main()
{

    vector<int>v= {-1, 0, 1, 2, -1, -4,-2,4,5};
    Solution s;
    s.remove(v);
    return 0;
}
