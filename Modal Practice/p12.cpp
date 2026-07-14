#include<iostream>
using namespace std;
class Employee
{
    int emp_no;
    float sal;
    public:
    Employee(int e,float s)
    {
        emp_no=e;
        sal=s;
    }
    Employee(const Employee& e)
    {
        emp_no=(e.emp_no)+1;
        sal=e.sal+1000;
    }
    friend void check(const Employee& e);
};
void check(const Employee& e)
{
    float sala;
    cout<<"Enter threshold sal:";
    cin>>sala;
    if(e.sal>sala)
        cout<<"Elligible\n";
    else
        cout<<"Not";

}
int main()
{
    Employee e1(101,19000);
    Employee e2(e1);
    check(e2);
    return 0;
}