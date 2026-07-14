#include<iostream>
using namespace std;
class Person
{
    protected:
    string name;
    int age;
    void get()
    {
        cout<<"Enter name:";
        getline(cin,name);
        cout<<"Enter age:";
        cin>>age;
        cin.ignore();
    }
};
class Student:virtual public Person
{
    protected:
    int roll;
    string course;
    void get()
    {
        
        cout<<"Enter roll:";
        cin>>roll;
        cin.ignore();
        cout<<"Enter course:";
        getline(cin,course);
    }
};
class Employee:virtual public Person
{
    protected:
    int empid;
    float sal;
    void get()
    {
        
        cout<<"Enter empployee id and salary:";
        cin>>empid>>sal;
        cin.ignore();
    }
};
class TA:public Student,public Employee
{
    string subject;
    public:
    void get()
    {
        Person::get();
        Student::get();
        Employee::get();
        cout<<"Enter subject handled:";
        getline(cin,subject);
    }
};
int main()
{
    TA t;
    t.get();
    return 0;
}