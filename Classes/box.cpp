#include<iostream>
using namespace std;
class Box
{
    
    int lt;
    int bd;
    int ht;
    public:
    Box():lt(1),bd(1),ht(1){}
    Box(int x,int y,int z):lt(x),bd(y),ht(z){}
    int volume()
    {
        int vol=lt*bd*ht;
        return vol;
    }

};
int main()
{
    Box b1;
    Box b2(2,3,4);
    cout<<"The volume of box1 is:"<<b1.volume()<<endl;
    cout<<"The volume of box2 is:"<<b2.volume()<<endl;
    
    return 0;
}
