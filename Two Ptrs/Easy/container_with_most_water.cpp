#include<iostream>
#include<vector>
using namespace std;
class Test
{
    public:
    void sol(vector<int>v)
    {
        int max=0;
        int left=0,right=v.size()-1;
        while(left<right)
        {
            int wd=right-left;
            int ht;
            if(v[left]<v[right])
            {
                ht=v[left];
                left++; 
            }
            else
            {
                ht=v[right];
                right--;
            }
            if(wd*ht>max)
                max=wd*ht;
            
        }
        cout<<max;
        
    }
};
int main()
{
    vector<int>v={1,8,6,2,5,4,8,3,7};
    Test t;
    t.sol(v);
    return 0;
}