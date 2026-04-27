#include<iostream>
using namespace std;
bool check(string str,int left,int right);
bool pal(string str,int left,int right)
{
    
    while(left<right)
    {
        if(str[left]==str[right])
        {
            left++;
            right--;
            continue;           
        }
        else
            return check(str,left+1,right)||check(str,left,right-1);
        
    }
    return true;
}
bool check(string str,int left,int right)
{
    while(left<right)
    {
        if(str[left]==str[right])
        {
            left++;
            right--;
            continue;           
        }
        else
            return false;
    }
    return true;
}

int main()
{
    string str1="value";
    string str2="madarm";
    bool temp=pal(str1,0,str1.size()-1);
    bool temp1=pal(str2,0,str2.size()-1);
    if(temp1)
        cout<<"Palindrome without one letter";
    return 0;
}