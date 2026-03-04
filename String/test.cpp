#include<iostream>
using namespace std;
int main()
{
    string line;
    getline(cin,line);
    for(int i=0;i<line.length,i++)
    {
        cout<<line[i];
    }
    cout<<"\n";

}
