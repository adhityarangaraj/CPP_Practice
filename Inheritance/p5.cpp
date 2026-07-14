#include<iostream>
using namespace std;
class Loan;
class Bank;
class Customer
{
    string name;
    float sal;
    float cr;
    public:
    Customer(string n,float c,float a)
    {
        name=n;
        sal=c;
        cr=a;
    }
    friend bool check(Customer c,Loan l);
    friend class Bank;
};
class Loan
{
    int loan;
    float interest;
    public:
    Loan(int l,float i)
    {
        loan=l;
        interest=i;
    }
    friend bool check(Customer c,Loan l);
};
class Bank
{
    public:
    void disp(Customer& c)
    {
    cout<<c.name<<" "<<c.sal<<" "<<c.cr<<endl;
    }
};
bool check(Customer c,Loan l)
{
    return (c.sal>=25000 && c.cr>=700 && l.loan<(c.sal*10));
}
int main()
{
    Customer c("Name",30000,1000);
    Loan l(15000,0.12);
    Bank b;
    b.disp(c);
    return 0;
}
