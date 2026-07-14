#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("names.txt");
    int n;
    cout<<"Enter the no of names u wish to enter:";
    cin>>n;
    cin.ignore();
    cout<<"Enter the names:\n";
    while(n>0)
    {
        string temp;
        getline(cin,temp);
        fout<<temp<<" ";
        n--;
    }
    fout.close();
    ifstream fin("names.txt");
    string name[n];
    for(int i=0;i<n;i++)
    {
        getline(fin,name[i]);
    }
    for(int a=0;a<n;a++)
    {
        for(int i=0;i<(name[a].size());i++)
        {
            for(int j=0;j<i-1-(name[a].size());j++)
            {
                if(name[a][j]<name[a][j+1])
                {
                    char temp=name[a][j];
                    name[a][j]=name[a][j+1];
                    name[a][j+1]=temp;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<name[i]<<" ";
    }
    cout<<"\n";
    fin.close();
    return 0;
}