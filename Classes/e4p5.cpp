#include<iostream>
#include<string>
using namespace std;

class Employee
{
    int employee_id;
    string name;
    string designation;
    double salary;
    double bonus;
    double totalCompensation;

public:
    void read()
    {
        cout<<"Employee ID: ";
        cin>>employee_id;
        cin.ignore();

        cout<<"Name: ";
        getline(cin,name);

        cout<<"Designation: ";
        getline(cin,designation);

        cout<<"Salary: ";
        cin>>salary;

        if(salary < 0)
        {
            cout<<"Invalid salary. Setting salary to 0.\n";
            salary = 0;
        }
    }

    void calculate()
    {
        if(designation == "Manager")
            bonus = salary * 0.15;
        else if(designation == "Team Lead")
            bonus = salary * 0.12;
        else if(designation == "Engineer")
            bonus = salary * 0.10;
        else
            bonus = 0;

        totalCompensation = salary + bonus;
    }

    void display()
    {
        cout<<"\nEmployee ID: "<<employee_id;
        cout<<"\nName: "<<name;
        cout<<"\nDesignation: "<<designation;
        cout<<"\nSalary: "<<salary;

        if(designation == "Manager")
            cout<<"\nBonus (15%): "<<bonus;
        else if(designation == "Team Lead")
            cout<<"\nBonus (12%): "<<bonus;
        else if(designation == "Engineer")
            cout<<"\nBonus (10%): "<<bonus;
        else
            cout<<"\nBonus: "<<bonus;

        cout<<"\nTotal Compensation: "<<totalCompensation<<"\n";
    }
};

int main()
{
    int n;
    cout<<"Number of employees: ";
    cin>>n;

    Employee e[n];

    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter details for Employee "<<i+1<<"\n";
        e[i].read();
        e[i].calculate();
    }

    cout<<"\n----- Employee Details -----\n";
    for(int i=0;i<n;i++)
        e[i].display();

    return 0;
}