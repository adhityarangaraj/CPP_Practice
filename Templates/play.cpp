#include<iostream>
using namespace std;
template <class T>
class Player
{
    string name;
    int matches;
    T runs;
    float avg;
    public:
    void get()
    {
        cout<<"Enter name:";
        getline(cin,name);
        cout<<"Enter runs:";
        cin>>runs;
        cout<<"Enter matches:";
        cin>>matches;
        cin.ignore();
    }
    void ave()
    {
        avg=runs/(float)matches;
    }
    void disp()
    {
        cout<<"Average:"<<avg<<endl;
    }
};
int main()
{
    Player<int> p;
    Player<float> p1;
    p.get();
    p.ave();
    p.disp();
    p1.get();
    p1.ave();
    p1.disp();
    return 0;
}