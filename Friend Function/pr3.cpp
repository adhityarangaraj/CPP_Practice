#include<iostream>
using namespace std;
class Auditor;
class Bank
{
    int bal;
    public:
    Bank(int amt)
    {
        bal=amt;
    }
    friend class Auditor;
};
class Auditor
{
    public:
    void check(Bank b)
    {
        cout<<"The bank balance is:"<<b.bal<<endl;
    }
};
int main()
{
    Bank b(1000);
    Auditor a;
    a.check(b);
    return 0;

}