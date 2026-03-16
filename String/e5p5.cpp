#include<string>
#include<cstring>
#include <iostream>
using namespace std;
class stringmanip
{
    string s;
    public:
    stringmanip(string temp):s(temp)
    {
        
    }
    stringmanip()
    {
        
    }
    void getstring()
    {
        cout<<"Enter the string:";
        getline(cin,s);
    }
    void disp()
    {
        cout<<"The updated string is:\n"<<s<<endl;
    }
    void capitalise()
    {
        for(int i=0;i<s.size();i++)
        {
            s[i]=toupper(s[i]);
        }
    }
    void sentcase()
    {
       for(int i=0;i<s.size();i++)
       {
           if(s[i]==' ')
                continue;
            else
            {
               s[i]=toupper(s[i]);
               break;
            }
       }
    }
    void titlecase()
    {
        bool inword;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                inword=false;
                continue;
            }
            else
            {
                if(!inword)
                {
                    s[i]=toupper(s[i]);
                    inword=true;
                }
            }
        }
    }
};
int main() 
{
    stringmanip s1;
    s1.getstring();
    int ch;
    cout<<"Enter your choice:\n1.Capitalise\n2.Sentence Case\n3.Title Case\n:";
    cin>>ch;
    switch(ch)
    {
        case 1:
                s1.capitalise();
                break;
        case 2:
                s1.sentcase();
                break;
        case 3:
                s1.titlecase();
                break;
        default:
                cout<<"Invalid choice!!Exitting\n";
                return 0;
    }
    s1.disp();
    
    return 0;
}