#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
class cord
{
    public:
    int x_cord;
    int y_cord;
    
    cord():x_cord(0),y_cord(0){}
    cord(int x1,int y1):x_cord(x1),y_cord(y1){}
    void input()
    {
        cout<<"Enter x co-ordinate and y co-ordinate:";
        cin>>x_cord>>y_cord;
    }
};    
void distance(cord &c1,cord &c2)
{
    int xtemp=pow((c1.x_cord-c2.x_cord),2);
    int ytemp=pow((c1.y_cord-c2.y_cord),2);
    float dist=sqrt(xtemp+ytemp);
    cout<<"Distance bet ("<<c1.x_cord<<","<<c1.y_cord<<") "<<"and ("<<c2.x_cord<<","<<c2.y_cord<<")" <<"is:"<<dist<<endl;
}
int main()
{
    cord c1;
    cout<<"Input for object 1:\n";
    c1.input();
    cord c2(3,5);
    cord c3;
    distance(c1,c3);
    distance(c1,c2);
    distance(c2,c3);
    return 0;
}
