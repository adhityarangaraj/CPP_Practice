#include<iostream>
using namespace std;
int main()
{
    string str1="abcd";
    string str2="pqrs";
    string res="";
    int i=0,j=0;
    while(i<str1.size()&&j<str2.size())
    {
        res+=str1[i];
        res+=str2[j];
        i++;
        j++;
    }
    if(str1.size()>str2.size())
    {
        while(i<str1.size())
        {
            res+=str1[i];
            i++;
        }
    }
    else
    {
        while(j<str2.size())
        {
            res+=str2[j];
            j++;
        }
    }
    cout<<res;
    return 0;
}