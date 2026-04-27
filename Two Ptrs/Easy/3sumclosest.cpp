#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v={2,3,4,5,-1,7,-6,5};
    int target=3;
    int key=99999999;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        int left=i+1,right=v.size()-1,temp=target-v[i];
        while(left<right)
        {
            int sum=v[left]+v[right];
            int current_sum=v[i]+v[right]+v[left];
            if(sum==temp)
            {
                key=current_sum;
                break;
            }
            else if(sum>temp)
            {
                if(abs(target-key)>abs(target-current_sum))
                    key=current_sum;
                right--;
            }
            else
            {
                if(abs(target-key)>abs(target-current_sum))
                    key=current_sum;
                left++;
            }
        }
    }
    cout<<key;
}