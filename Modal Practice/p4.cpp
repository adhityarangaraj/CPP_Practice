#include<iostream>
using namespace std;
class Hex
{
    short int hexc;
    public:
    Hex()
    {
        hexc=0;
    }
    Hex(int x)
    {
        hexc=x;
    }
    short int operator --()
    {
        if((--hexc)<0)
            hexc=255;
        return --hexc;
    }
    short int operator --(int)
    {
        if((hexc--)<0)
            hexc=255;
        return hexc--;
    }
};
int main()
{
    Hex h1;
    Hex h2(10);
    cout<<"Pre decreement operator with default value 0:"<<--h1<<endl;
    cout<<"Post decreemnet operator with default value 10:"<<h2--<<endl;
}