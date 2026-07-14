#include<iostream>
using namespace std;
class Battery
{
    int max;
    int current;
    public:
    void get()
    {
        cout<<"Enter max charge and current charge:";
        cin>>max>>current;
    }
    Battery  operator --(int)
    {
        Battery temp;
        temp.max=max;
        temp.current=current--;
        return temp;
    }
    Battery operator ++(int)
    {
        Battery temp;
        temp.max=max;
        temp.current=current++;
        return temp;
    }
    void disp()
    {
        cout<<"Charge:"<<current<<endl;
    }
};
int main()
{
    Battery b1;
    Battery b3=b1--;
    Battery b2=b1++;
    b2.disp();
    b3.disp();
    return 0;
}