#include<iostream>
using namespace std;
class Patient
{
    int tok;
    string name;
    int age;
    string Aliment;
    string prio;
    public:
    void get()
    {
        cout<<"Enter token no and age:";
        cin>>tok>>age;
        cin.ignore();
        cout<<"Enter name:";
        getline(cin,name);
        cout<<"Enter Aliment:";
        getline(cin,Aliment);
        if(age<10 || age>=60)
        {
            prio="HIGH";
        }
        else
            prio="NORMAL";
    }
    string getpr()
    {
        return prio;
    }
    void display()
    {
        cout<<"DETAILS WILL BE FILLED IN EXAM NOW FOR PRACTICE ITS FINE\n";
    }
    bool isprio()
    {
        if(prio=="HIGH")
            return true;
        else 
            return false;
    }

};
int main()
{
    Patient p[3];
    for(int i=0;i<3;i++){
    p[i].get();
    }
    for(int i=0;i<3;i++)
    {
        if(p[i].getpr()=="HIGH")
            p[i].display();
    }
    for(int i=0;i<3;i++)
    {
        if(p[i].getpr()=="NORMAL")
            p[i].display();
    }

}