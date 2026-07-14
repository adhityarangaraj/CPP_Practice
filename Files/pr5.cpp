#include<iostream>
#include<fstream>
using namespace std;
class Student
{
    public:
    int roll;
    string name;
    float cg;
    
    void get()
    {
        cout<<"Enter name:";
        getline(cin,name);
        cout<<"Enter roll no:";
        cin>>roll;
        cout<<"Enter CGPA:";
        cin>>cg;
        cin.ignore();
    }
    void disp()
    {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll no:"<<roll<<endl;
        cout<<"CGPA:"<<cg<<endl;
    }
};
int main()
{
    ofstream fout("obj.bin",ios::binary);
    Student s;
    float cut=8.77;
    s.get();
    fout.write((char*)&s,sizeof(s));
    fout.close();
    ifstream fin("obj.bin",ios::binary);
    Student temp;
    fin.read((char*)&temp,sizeof(temp));
    fin.close();
    if(temp.cg>=cut)
        temp.disp();
    else
        cout<<"The student does not satisfy the given cutoff\n";
    return 0;
}