#include<iostream>
#include<iomanip>
using namespace std;
class BankAccount
{
    long int acc_no;
    string acc_holdername;
    float balance;
    public:
    BankAccount(long int acc1_no,string name):acc_no(acc1_no),acc_holdername(name)
    {
        balance=0;
    }
    BankAccount(long int acc1_no,string name,float bal):acc_no(acc1_no),acc_holdername(name),balance(bal)
    {
        
    }
    
    void withdraw()
    {
        float wdr;
        cout<<"Enter the Withdrawal Amount:";
        cin>>wdr;
        if(wdr<balance)
        {
            balance-=wdr;
            //cout<<"The updated balance is:"<<fixed<<setprecision(3)<<balance<<endl;
        }
        //cout<<"The updated balance is:"<<balance<<endl;
        else
        {
            cout<<"There is not enough money in the account to withdraw try again with a smaller one\n";
        }
     }
    void deposit()
    {
        float dep;
        cout<<"Enter the deposit amount:";
        cin>>dep;
        balance+=dep;
        //cout<<"The updated balance is:"<<balance<<endl;
    }
    void disp()
    {
        cout<<"ACCOUNT DETAILS:\n";
        cout<<"Account No:"<<acc_no<<endl;
        cout<<"Account Holder Name:"<<acc_holdername<<endl;
        cout<<"The Balance is:"<<fixed<<setprecision(3)<<balance<<endl;
    }
    ~BankAccount()
    {
        cout<<"Object with acc_no "<<acc_no<<" is destroyed\n";
    }
 };
 int main()
 {
    BankAccount b1(160024435,"Adhitya R");//With 0 as initial balance
    BankAccount b2(160024436,"Gokul Nath",10000);//With initial balance as 10000
    int ch;
    cout<<"FOR OBJECT WITH ACC NO:160024435\n";
    cout<<"Press 1 to Deposit\n2.Press 2 to Withdraw\n:";
    cin>>ch;
    switch(ch)
    {
        case 1:
                b1.deposit();
                break;
        case 2:
                b1.withdraw();
                break;
    }
    b1.disp();
    cout<<endl;
    cout<<"FOR OBJECT WITH ACC NO:160024436\n";
    cout<<"Press 1 to Deposit\n2.Press 2 to Withdraw\n:";
    cin>>ch;
    switch(ch)
    {
        case 1:
                b2.deposit();
        case 2:
                b2.withdraw();
    }
    
    //b1.deposit();
    //b1.withdraw();
    
    //b2.deposit();
    //b2.withdraw();
    b2.disp();
 }
