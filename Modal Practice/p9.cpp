#include<iostream>
using namespace std;
class Student
{
    string name;
    int roll;
    float cg;
    public:
    Student(string n,int r,float c):name(n),roll(r),cg(c)
    {

    }
    friend ostream& operator <<(ostream& out,Student s);
    
};
ostream& operator<<(ostream&out,Student s)
{
    out<<s.name<<s.cg<<s.roll<<endl;
    return out;
}
int main()
{
    Student s("abc",1,8.7);
    cout<<s;
}