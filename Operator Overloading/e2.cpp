#include<iostream>
using namespace std;
class Player
{
    int score;
    string name;
    public:
    void get()
    {
        cout<<"Enter the name:";
        getline(cin,name);
        cout<<"Enter score:";
        cin>>score;
        cin.ignore();
    }
    bool operator >(Player p2)
    {
        if(score>p2.score)
            return true;
        else
            return false;
    }
    void disp(bool temp,Player p2)
    {
        if(temp)
        {
            cout<<"The player with the highest score is:"<<name<<endl;
        }
        else
            cout<<"The player with the highest score is:"<<p2.name<<endl;
    }
};
int main()
{
    Player p1,p2;
    p1.get();
    p2.get();
    p1.disp(p1>p2,p2);
    return 0;
}