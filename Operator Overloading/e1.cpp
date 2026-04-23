#include<iostream>
using namespace std;
class Distance
{
    int feet;
    int inch;
    public:
    Distance()
    {

    }
    Distance(int f,int i):feet(f),inch(i)
    {

    }
    Distance operator +(Distance d2)
    {
        Distance d3;
        d3.feet=feet+d2.feet+((inch+d2.inch)/12);
        d3.inch=(inch+d2.inch)%12;
        return d3;
    }
    void disp()
    {
        cout<<"It is "<<feet<<" Feet and "<<inch<<" Inch "<<endl;
    }
    
};
int main()
{
    Distance d1(12,3);
    Distance d2(10,9);
    Distance d3;
    d3=d1+d2;
    d3.disp();
    return 0;
}
