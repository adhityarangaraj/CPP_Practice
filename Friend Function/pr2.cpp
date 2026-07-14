#include<iostream>
using namespace std;
class Scholarship;
class Student
{
    int roll;
    float marks;
    float attendance;
    public:
    void get()
    {
        cout<<"Enter roll:";
        cin>>roll;
        cout<<"Enter marks and attendance:";
        cin>>marks>>attendance;
    }
    friend bool check(Student s,Scholarship p);
};
class Scholarship
{
    float minm;
    float mina;
    public:
    void getData()
    {
        cout<<"Enter min marks and attendance to be elligible:";
        cin>>minm>>mina;
    }
    friend bool check(Student s,Scholarship p);
};
bool check(Student s,Scholarship p)
{
    if(s.marks>p.minm && s.attendance>p.mina)
        return true;
    else
        return false;
}
int main()
{
    Student s;
    Scholarship p;
    p.getData();
    s.get();
    if(check(s,p))
        cout<<"Student is elligible\n";
    else
        cout<<"Student is not elligible\n";
    return 0;
}