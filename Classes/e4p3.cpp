#include<iostream>
using namespace std;
class Student
{
    int roll;
    int marks[5];
    string name;
    float avg;
    char grade;
    public:
    
        void input()
        { 
            cout<<"Enter roll number of student:";
            cin>>roll;
            cin.ignore();
            cout<<"Enter name:";
            getline(cin,name);
            cout<<"Enter marks:\n";
            for(int i=0;i<5;i++)
            {
                cin>>marks[i];
            }
        }
        void verify()
        {
            for(int i=0;i<5;i++)
            {
                if(marks[i]<0||marks[i]>100)
                {
                    cout<<"Invalid marks entered for subject "<<i+1<<".Try again!!\n";
                    cout<<"Enter marks:\n";
                    for(int i=0;i<5;i++)
                    {
                        cin>>marks[i];
                    }
                    verify();
                    break;
                }
                
            }
            return;
        }
        void calc()
        {
            int tot=0;
            for(int i=0;i<5;i++)
            {
                tot+=marks[i];
            }
            avg=tot/5;
            if(avg<40)
                grade='F';
            else if(avg>=40 && avg<55)
                grade='E';
            else if(avg>=55 && avg<60)
                grade='D';
            else if(avg>=60 && avg<65)
                grade='C';
            else if(avg>=65 && avg<75)
                grade='B';
            else if(avg>=75 && avg<90)
                grade='A';
            else if(avg>=90 && avg<100)
                grade='S';
       }
       void disp()
       {
            cout<<"Roll Number:"<<roll<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"Average:"<<avg<<endl;
            cout<<"Grade:"<<grade<<endl;
            
       }
 };
 int main()
 {
    int n;
    cout<<"Enter no of students:";
    cin>>n;
    Student s[n];
    for(int i=0;i<n;i++)
    {
        cout<<"For Student "<<i+1<<endl;
        s[i].input();
        s[i].verify();
        s[i].calc();
    }
    for(int i=0;i<n;i++)
    {
           cout<<"\nDetails of Student:"<<i+1<<endl;
           s[i].disp();
           
    }
    return 0;
 }
    
             
            
