#include<iostream>
#include<fstream>
using namespace std;
class Employee
{
    int sal;
    int id;
    string name;
    public:
    Employee()
    {

    }
    Employee(int s,int i,string m):sal(s),id(i),name(m)
    {

    }
    void disp()
    {
        cout<<name<<""
    }
};
int main()
{
    int ch;
    do
    {
        cout<<"Press 1 to Add a Employee Record\n2.Press 2 to Display all Employee record\n3.Search an employee record\n4.Exit";
        cin>>ch;
        switch(ch)
        {
            case 1:
                    ofstream fout("employee.dat",ios::binary|ios::app);
                    Employee e(12000,101,"Adhit");
                    fout.write((char*)&e,sizeof(e));
                    fout.close();
                    break;
            case 2:
                    ifstream fin("employee.dat",ios::binary);
                    Employee temp;
                    while(fin.read((char*)&temp,sizeof(temp)))
                    {
                        temp.disp();
                    }
                    break;


        }
    }while(ch!=4);
    return 0;
}