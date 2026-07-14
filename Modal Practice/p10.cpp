#include<iostream>
using namespace std;
class Test
{
    int roll;
    public:
    friend istream& operator>>(istream & in,Test t);
};
istream& operator>>(istream& in,Test t)
{
    cout<<"Enter:";
    in>>t.roll;
    return in;
}
int main()
{
    Test t;
    cin>>t;
    return 0;
}