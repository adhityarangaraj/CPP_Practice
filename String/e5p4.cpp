#include<string>
#include<cstring>
#include <iostream>
using namespace std;
class A
{
    string s;
    public:
    A()
    {
        cout<<"Enter the string for class A:";
        getline(cin,s);
    }
    bool isPalindrome()
    {
        string rev=s;
        int n=rev.size();
        for(int i=0;i<n/2;i++)
        {
            char temp=rev[i];
            rev[i]=rev[n-i-1];
            rev[n-i-1]=temp;
        }
        if(rev==s)
            return true;
        else 
            return false;
    }
};
class B
{
    char str[100];
    public:
    B()
    {
        cout<<"Enter the text for char array class B:";
        fgets(str,100,stdin);
    }
    bool isPalindrome()
    {
        char rev[100];
        strcpy(rev,str);
        cout<<rev;
        int n=strlen(rev);
        for(int i=0;i<n/2;i++)
        {
            char temp=rev[i];
            rev[i]=rev[n-i-1];
            rev[n-i-1]=temp;
        }
        if(strcmp(rev,str))
            return true;
        else 
            return false;
    }
};
int main() 
{
   A a;
   B b;
   bool c= a.isPalindrome();
   bool c1=b.isPalindrome();
    if(c)
        cout<<"Class A String is a Palindrome\n";
    else
        cout<<"Class A String is not a Palindrome\n";
    if(c1)
        cout<<"Class B Char Array is a Palindrome\n";
    else
        cout<<"Class B Char Array is not a Palindrome\n";
    
    return 0;
}