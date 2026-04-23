#include<iostream>
using namespace std;
class Test
{
    string name;
    int age;
    public:
    void disp()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
    }
    friend istream& operator >>(istream& in,Test& t); 
};
istream& operator >>(istream& in,Test& t)
{
    cout<<"Enter name:";
    getline(in,t.name);
    cout<<"Enter age:";
    in>>t.age;
    cin.ignore();
    return in;
}
int main()
{
    Test t1;
    cin>>t1;
    t1.disp();
    return 0;
}