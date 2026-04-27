#include<iostream>
#include<vector>
using namespace std;
class Test
{
    public:
    void check(string str)
    {
        int left=0,right=str.size()-1;
        bool flag=true;
        while(left<right)
        {
            if(!isalpha(str[left]))
             { left++;continue;}
            else if(!isalpha(str[right]))
               { right--;continue;}
            if(toupper(str[left])==toupper(str[right]))
            {
                right--;
                left++;
                continue;
            }
            else
            {
                flag=false;
                break;
            }
        }
        if(flag)
            cout<<"Palindrome"<<endl;
        else
            cout<<"Not a Palindrome"<<endl;
    }
};
int main()
{
    string smth="Madam";
    string smth1="A man, a plan, a canal: Panama";
    Test t;
    t.check(smth);
    t.check(smth1);
    return 0;
}