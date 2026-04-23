#include<iostream>
using namespace std;
class Date
{
    int day;
    int month;
    int year;
    public:
    Date()
    {
        day=1;
        month=1;
        year=2026;
    }
    void get()
    {
        cout<<"Enter the day(from 1-31):";
        cin>>day;
        cout<<"Enter the month(1-12):";
        cin>>month;
        cout<<"Enter the year:";
        cin>>year;
    }
    void operator+(int days)
    {
        int temp=days/30;
        month+=temp;
        if(month%12!=0)
        {
            int temp1=month%12;
            year+=1;
            month+=temp1;
        }
        if((days-(30-day))>0)
            day+=(days-(30-day));
        else
            day+=(((30-day)-days));
    }
    void operator-(int days)
    {
        int temp=days/30;
        month-=temp;
        if(month<0)
        {
            month+=12;
            year-=1;
        }
        if((days-(30-day))>0)
            day+=(days-(30-day));
        else
            day+=(((30-day)-days));
    }
};