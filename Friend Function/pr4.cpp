#include<iostream>
#include<iomanip>
using namespace std;
class Member;
class Auditor;
class Book
{
    int id;
    string title;
    int fine;
    public:
    Book(int id1,string name,int amt):id(id1),title(name),fine(amt)
    {

    }
    friend void calc(const Book& b,const Member &m);
    friend class Auditor;
};
class Member
{
    int mid;
    string mname;
    int days;
    public:
    Member(int id,string name,int del):mid(id),mname(name),days(del)
    {

    }
    friend void calc(const Book& b,const Member &m);
};
class Auditor
{
    public:
    void audit(Book b)
    {
        cout<<"BOOK DETAILS\n";
        cout<<setw(40)<<setfill('*')<<endl;
        cout<<setfill(' ');
        cout<<left;
        cout<<setw(20)<<setfill(' ')<<"Book ID"<<":"<<b.id<<endl;
        cout<<setw(20)<<setfill(' ')<<"Book Title"<<":"<<b.title<<endl;
        cout<<setw(20)<<setfill(' ')<<"Book Fine"<<":"<<b.fine<<endl;
        cout<<setw(40)<<setfill('*')<<endl;
        cout<<setfill(' ');
        cout<<right;
    }
};
void calc(const Book &b,const Member &m)
{
    int total=b.fine*m.days;
    cout<<"Book Name:"<<b.title<<endl;
    cout<<"Member name:"<<m.mname<<endl;
    cout<<"Total Fine:"<<total<<endl;
}
int main()
{
    Book b(101,"Programming",190);
    Member m(3,"Adhit",13);
    Auditor a;
    a.audit(b);
    calc(b,m);
    return 0;
}
