#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("numbers.txt");
    int n;
    cout<<"Enter the no of numbers which u wish to enter:";
    cin>>n;
    int n1;
    cout<<"Enter the numbers:\n";
    while(n>0)
    {
        cin>>n1;
        fout<<n1<<" ";
        n--;
    }
    fout.close();
    ifstream fin("numbers.txt");
    ofstream out("pefect.txt");
    int no;
    while(fin>>no)
    {
        int pf=0;
        for(int i=1;i<no;i++)
        {
            if(no%i==0)
                pf+=i;
            else
                continue;
        }
        if(no==pf)
            out<<no<<" ";

    }
    fin.close();
    out.close();
    ifstream in("pefect.txt");
    while(in>>no)
    {
        cout<<no<<" ";
    }
    cout<<endl;
    in.close();
    return 0;
}