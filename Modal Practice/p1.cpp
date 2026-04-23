#include<iostream>
using namespace std;
class Student
{
    string name;
    int roll;
    float avg;
    int marks[5];
    public:
    Student()
    {
        name="Unknown";
        roll=0;
        avg=0;
        for(int i=0;i<5;i++)
        {
            marks[i]=0;
        }
    }
    Student(string name1,int roll1,int mark1[])
    {
        name=name1;
        roll=roll1;
        for (int i=0; i<5; i++)
        {
            marks[i]=mark1[i];
        }
    }
    void calcavg()
    {
        int tot=0;
        for (int i = 0; i<5; i++)
        {
            tot+=marks[i];   
        }
        avg=(float)tot/5;
    }
    void disp()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no:"<<roll<<endl;
        cout<<"Average:"<<avg<<endl;
    }
    ~Student()
    {
        cout<<"Student record destryed\n";
    }
};
int main()
{
    int m1[]={99,99,93,54,67};
    int m2[]={98,78,9,7,6};
    Student s[3]={Student("Adhit",3,m1),Student("Rga",4,m2)};
    for(int i=0;i<3;i++)
    {
        s[i].calcavg();
        s[i].disp();
    }
    return 0;
}