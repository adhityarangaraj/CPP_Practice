#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int n;
    ofstream fout("number.txt");
    cout<<"Enter the no of numbers u want to enter:";
    cin>>n;
    cout<<"Enter the numbers:\n";
    while(n>0)
    {
        int no;
        cin>>no;
        fout<<no<<" ";
        n--;
    }
    fout.close();
    ifstream fin("number.txt");
    ofstream f1("prime.txt");
    ofstream f2("comp.txt");
    ofstream f3("even.txt");
    ofstream f4("odd.txt");
    int no,c=0;
    while(fin>>no)
    {
        for(int j=2;j<no/2;j++)
        {
            if(no%j==0)
                c++;
            else 
                continue;
        }
        if(c==0)
            f1<<no<<" ";
        else
            f2<<no<<" ";

        if(no%2==0)
            f3<<no<<" ";
        else
            f4<<no<<" ";
    }
    fin.close();
    f1.close();
    f2.close();
    f3.close();
    f4.close();
}