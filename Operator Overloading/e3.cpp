#include<iostream>
using namespace std;
class Employee
{
    string name;
    int age;
    string desig;
    float sal;
    public:
    void get()
    {
        cout<<"Enter name:";
        getline(cin,name);
        cout<<"Enter designation:";
        getline(cin,desig);
        cout<<"Enter age:";
        cin>>age;
        cout<<"Enter salary:";
        cin>>sal;
        cin.ignore();
    }
    friend ostream& operator <<(ostream& out,Employee e);
};
ostream& operator <<(ostream& out,Employee e)
{
    out<<e.name<<endl;
    out<<e.desig<<endl;
    out<<e.age<<endl;
    out<<e.sal<<endl;
    return out;
}
int main()
{
    Employee e;
    e.get();
    cout<<e;
    return 0;
}