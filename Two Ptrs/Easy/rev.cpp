#include<iostream>
using namespace std;
int main()
{
    string str1="paline";
    //string str2="madam";
    int left=0,right=str1.size()-1;
    while(left<right)
    {
        char temp=str1[left];
        str1[left]=str1[right];
        str1[right]=temp;
        right--;
        left++;
    }
    cout<<str1;
    return 0;
}