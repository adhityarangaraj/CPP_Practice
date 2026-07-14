#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("names1.txt");
    int n=4,n1=4;
    cout<<"Enter the 4 names which u wish to enter:\n";
    while(n1>0)
    {
        string temp;
        getline(cin,temp);
        fout<<temp<<endl;
        n1--;
    }
    fout.close();
    ifstream fin("names1.txt");
    if(!fin)
        cout<<"Error opening file\n";
    string names[4];
    while(n>0)
    {
        n--;
        getline(fin,names[n]);
        
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4-i-1;j++)
        {
            if(names[j]>names[j+1])
            {
                string temp=names[j];
                names[j]=names[j+1];
                names[j+1]=temp;
            }
        }
    }
    for(int i=0;i<4;i++)
    {
        cout<<names[i]<<endl;
    }
    fin.close();
    return 0;
}