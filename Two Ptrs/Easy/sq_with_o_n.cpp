#include<iostream>
#include<vector>
using namespace std;
class Test
{
    public:
    vector<int> sq(vector<int>v)
    {
        int n=v.size();
        int left=0,right=n-1;
        vector<int>temp(n);
        int i=0;
        while(left<=right)
        {

            
            if((v[left]*v[left])>=(v[right]*v[right]))
            {
                temp[n-i-1]=v[left]*v[left];
                left++;
                i++;
                continue;
            }
            else
            {
                temp[n-i-1]=v[right]*v[right];
                right--;
                i++;
                continue;
            }
        }
        return temp;    
    }
};

int main()
{
    vector<int>v={-4,-1,0,3,5};
    Test t;
    vector<int>final=t.sq(v);
    for(int i=0;i<final.size();i++)
    {
        cout<<final[i]<<" ";
    }
    cout<<endl;
    return 0;
}
