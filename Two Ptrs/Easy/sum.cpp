#include<iostream>
#include<vector>
using namespace std;
class Test
{
    public:
    bool sol(vector<int>&v,int target)
    {
        int left=0,right=(v.size()-1);
        while(left<right)
        {
            int sum=v[left]+v[right];
            if(sum==target)
                return true;
            
            else if(sum>target)
                    right--;

            else if(sum<target)
                    left++;
            
        }
        return false;
    }
};
int main()
{
    vector<int>v={2,3,4,5,8,9,13};
    int target=14;
    Test t;
    bool temp=t.sol(v,target);
    if(temp)
        cout<<"Found"<<endl;
    else
        cout<<"Not Found"<<endl;
    return 0;
}