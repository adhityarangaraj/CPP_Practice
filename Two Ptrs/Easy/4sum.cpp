#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v={1,2,5,7,-1,-2,-7};
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if((i>0&&j>0)&&(v[i]==v[i-1]||v[j]==v[j-1]))
                continue;
            int left=j+1,right=v.size()-1;
            int target=-(v[i]+v[j]);
            while(left<right)
            {
                int sum=v[left]+v[right];
                if(sum==target)
                {
                    cout<<v[i]<<" "<<v[j]<<" "<<v[left]<<" "<<v[right]<<endl;
                    left++;
                    right--;
                    while(left<<right && v[left]==v[left-1])
                        left++;
                    while(left<right && v[right]==v[right+1])
                        right--;
                }
                else if(sum>target)
                {
                    right--;
                    continue;
                }
                else
                {
                    left++;
                    continue;
                }
            }
        }
    }   
    return 0;
}