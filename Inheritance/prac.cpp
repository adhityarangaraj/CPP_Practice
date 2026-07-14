#include<iostream>
using namespace std;
class Person
{
    string name;
    int age;
    public:
    void get()
    {
        cout<<"Enter name and age:";
        cin>>name>>age;
    }
    virtual void display()
    {
        cout<<name<<" "<<age;
    }
};
class Pateient:public Person
{
    int id;
    public:
    void display() override
    {
        Person::display();
    }
};
class Doctor: public Person
{
    int id;
    public:
    void display() override
    {
        Person::display();
    }
};
int main()
{
    Person*p;
    Doctor d;
    Pateient p1;
    p=&d;
    p->display();
    p=&p1;
    p->display();

}