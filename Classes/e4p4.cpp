#include<iostream>
#include<string>
using namespace std;

class TNEB
{
    int eb_no;
    string cons_name;
    string cons_type;
    int units;
    int bill;

public:
    void input()
    {
        cout<<"Enter Eb-number: ";
        cin>>eb_no;
        cin.ignore();

        cout<<"Enter Consumer Name: ";
        getline(cin,cons_name);

        cout<<"Enter Consumer Type (Domestic/Commercial): ";
        getline(cin,cons_type);

        cout<<"Enter units consumed: ";
        cin>>units;
    }

    void calculate()
    {
         //Assuming first 100 units as free and then 101-200 units for 55 and rest for 70
        if(cons_type == "Domestic")
        {
            if(units <= 100)
                bill = 0;
            else if(units <= 200)
                bill = (units - 100) * 55;
            else
                bill = (100 * 55) + (units - 200) * 70;
        }
         //For commercial each unit costs 80(assumption)
        else if(cons_type == "Commercial")
        {
            bill = units * 80;
        }
        else
        {
            bill = 0;
        }
    }

    void display()
    {
        cout<<"\nEB Number: "<<eb_no;
        cout<<"\nConsumer Name: "<<cons_name;
        cout<<"\nConsumer Type: "<<cons_type;
        cout<<"\nUnits Consumed: "<<units;
        cout<<"\nTotal Bill: "<<bill<<"\n";
    }
};

int main()
{
    int n;
    cout<<"Enter number of consumers: ";
    cin>>n;

    TNEB t[n];

    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter details for Consumer "<<i+1<<"\n";
        t[i].input();
        t[i].calculate();
    }

    cout<<"\n----- Bill Details -----\n";
    for(int i=0;i<n;i++)
        t[i].display();

    return 0;
}