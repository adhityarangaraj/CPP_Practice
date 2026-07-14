#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s="My name is Sam! People call me Bill";
    string s2="1 2 3 My name is Adhit";
    bool inword=false;
    int word=0;
    for(int i=0;i<s.size();i++)
    {
        if(isspace(s[i]))
            inword=false;
        else
        {
            if(inword)
                continue;
            else
            {
                word++;
                inword=true;
            }
        }
    }
    cout<<word<<endl;
}