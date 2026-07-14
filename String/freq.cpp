#include<iostream>
using namespace std;
int main()
{
    string s1="silent";
    string s2="listen";
    int freq[256]={0};
    for(int i=0;i<s1.size();i++)
    {
        freq[s1[i]]++;
    }
    for(int j=0;j<s2.size();j++)
    {
        freq[s2[j]]--;
    }
    for(int i=0;i<256;i++)
    {
        if(freq[i]!=0)
            {
                cout<<"Not anagram\n";
                break;
            }
    }
   
    return 0;
}