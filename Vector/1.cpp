
#include<iostream>
#include<vector>
using namespace std;
class  Solution {
public:
    int largestElement(vector<int>& nums) 
    {
        int max=nums[0];
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>max)
                max=nums[i];
        }
        cout<<max;
        return max;
    }
};
int main()
{
    vector<int>v={2,4,5,6,89};
    Solution s;
    s.largestElement(v);
    return 0;
}