#include<iostream>
using namespace std;
class Consumer;
class Reading
{
    int cons_no;
    int month;
    int prev;
    int current;
    public:
    Reading(int no,int m,int p,int c)
    {
        cons_no=no;
        month=m;
        prev=p;
        current=c;
    }
    void get()
    {
        cout<<"Enter month no:";
        cin>>month;
        cout<<"Enter current reading:";
        cin>>current;
    }
    void update()
    {
        prev=current;
    }
    friend class Consumer;
};

class Consumer
{
    int con_no;
    int month;
    int units;
    float bill;
    public:
    Consumer(Reading r)
    {
        con_no=r.cons_no;
        month=r.month;
        units=r.current-r.prev;
        bill=units*(float)2;
    }
    void disp(Reading& r)
    {
        cout<<"Consumer no:"<<con_no<<endl;
        cout<<"Month no:"<<month<<endl;
        cout<<"Units Consumed"<<units<<endl;
        cout<<"Total Bill:"<<bill<<endl;
        r.update();
    }
};
int main()
{
    int no,m,p,c;
    cout<<"For the first month,Enter Consumer no,month no,prev reading and current reading:\n";
    cin>>no>>m>>p>>c;
    Reading r(no,m,p,c);
    Consumer co(r);
    co.disp(r);
    return 0;
}