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
    int operator ++()
    {
         count++;
    }
    int operator ++(int)
    {
        return ++count;
    }
};
int main()
{
    Counter c1(10),c2(10);
    int test=c1++;
    int test1=++c2;
    cout<<test<<" "<<test1<<endl;
    return 0;
}