#include<iostream>
#include<string>
using namespace std;
class Password
{
    string password;
    public:
    void getpasswrd()
    {
        cout<<"Enter the password:";
        getline(cin,password);
    }
    bool check()
    {
        int up=0,low=0,sp=0,num=0;
        if(password.size()>=8)
        {
            for(char ch:password)
            {
                if(isupper(ch))
                    up++;
                else if(islower(ch))
                    low++;
                else if(isdigit(ch))
                    num++;
                else
                    sp++;
            }
          if(up==0||low==0||sp==0||num==0)
            return false;
          else
            return true;
            
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Password p;
    p.getpasswrd();
    bool c=p.check();
    if(c)
        cout<<"Password Strength:STRONG"<<endl;
    else
        cout<<"Password Strength:WEAK"<<endl;
    return 0;
}
