#include<iostream>
using namespace std;
template<class T>
class Stock
{
    T x;
    public:
    void add(T y)
    {
        x+=y;
    }
    void rem()
    {
        x=0;
    }
    T get()
    {
        return x;
    }
    void disp()
    {
        cout<<x<<endl;
    }
};
int main()
{
    Stock<int>s;
    Stock<float>a;
    s.add(100);
    a.add(100);
}