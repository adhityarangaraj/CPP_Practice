#include<iostream>
using namespace std;
class Pound
{
    int shill;
    int pound;
    int pence;
    public:
    void get()
    {
        cout<<"Enter pounds,chillings and pence:";
        cin>>pound>>shill>>pence;
    }
    Pound operator+(Pound p)
    {
        Pound temp;
        temp.pence=(p.pence+pence)%12;
        temp.shill=((p.shill+shill)%20)+((p.pence+pence)/12);
        temp.pound=(p.pound+pound)+((p.shill+shill)/20);
        return temp;
    }
    void disp()
    {
        cout<<"Old Pound is:"<<pound<<"."<<shill<<"."<<pence<<"."<<endl;
    }
};
int main()
{
    Pound p1,p2;
    p1.get();
    p2.get();
    Pound p3;
    p3=p1+p2;
    p3.disp();
}