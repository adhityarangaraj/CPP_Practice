#include<iostream>
using namespace std;
class Counter
{
    int count;
    public:
    Counter(int x):count(x)
    {

    }
    Counter()
    {
        count=0;
    }
    Counter operator ++(int)
    {
        Counter temp;
        temp.count=count++;
        return temp;
    }
    Counter operator ++()
    {
        Counter temp;
        temp.count=++count;
        return temp;
    }
    void disp()
    {
        cout<<"Count:"<<count<<endl;
    }
};
int main()
{
    Counter c1(10);
    Counter c2=c1++;
    Counter c3=++c1;
    c1.disp();
    c2.disp();
    c3.disp();
    return 0;
}