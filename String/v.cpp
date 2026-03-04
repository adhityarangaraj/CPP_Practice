#include<iostream>
#include<vector>
#include <string>
#include <cctype>
using namespace std;
class Test
{
    public:
    bool str(string &v)
    {
        int right=v.length()-1,left=0;
       while(left<right)
       {
            if(!isalnum(v[left]))
            {   
                left++;
                continue;
            }
            else if(!isalnum(v[right]))
            {
                right--;
                continue;
            }
            else
            {
                v[right]=tolower(v[right]);
                v[left]=tolower(v[left]);
                if(v[left]==v[right])
                {
                    left++;
                    right--;
                    continue;

                }
                    
                else
                    return false;
            }

       }
       return true;
       
    }
};
int main()
{
   
    string v="race a car";
    string v1="A man, a plan, a canal: Panama";

    Test s;
    bool te=s.str(v1);
    cout<<te;
    return 0;
}