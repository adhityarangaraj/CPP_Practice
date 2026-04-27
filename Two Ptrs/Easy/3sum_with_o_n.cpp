#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v={-1,2,1,0,3,4,-4,-2};
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        if(i>0 && v[i]==v[i-1])
            continue;
        
        int temp=(-v[i]);
        int left=i+1,right=v.size()-1;
        while(left<right)
        {
            int sum=v[left]+v[right];
            if(sum==temp)
            {
                cout<<v[i]<<" "<<v[left]<<" "<<v[right]<<endl;
                left++;
                right--;
                while(left<right && v[left]==v[left-1])
                    left++;
                while(left<right && v[right]==v[right+1])
                    right--;
            }
            else if(sum>temp)
                right--;
            else
                left++;
        }
    }
    return 0;
}