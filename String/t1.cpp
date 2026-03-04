#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="Hello";
    string s2="HiMyname";
    //cout<<s1.capacity()<<" "<<s1.size()<<" ";
    cout<<s2.capacity();
     s2.erase(4,2);
    cout<<s2.size()<<" ";
   
    cout<<s2;
    return 0;
 }
