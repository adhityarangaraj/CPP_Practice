#include<iostream>
using namespace std;
float calculateVolume(float a)
{
    return a*a*a;
}
float calculateVolume(float l,float b,float h)
{
    return l*b*h;
}
float calculateVolume(float r,float h)
{
        return 3.14*r*r*h;
}
int main()
{
    float a,l,b,h,r;
    cout<<"FOR VOL OF RECTANGULAR BOX:\n";
    cout<<"Enter length,breadth and height:";
    cin>>l>>b>>h;
    cout<<"The vol of rectangular box  is:"<<calculateVolume(l,b,h)<<endl;
    cout<<"FOR VOL OF CYLINDER :\n";
    cout<<"Enter radius and height:";
    cin>>r>>h;
    cout<<"The vol of cylinder is:"<<calculateVolume(r,h)<<endl;
    cout<<"FOR VOL OF CUBE:\n";
    cout<<"Enter the side:";
    cin>>a;
    cout<<"The vol of cube is:"<<calculateVolume(a)<<endl;
    return 0;
}
