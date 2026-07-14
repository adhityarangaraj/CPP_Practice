#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout("final.dat",ios::binary);
    int n,n1;
    cout<<"Enter 2 no:";
    cin>>n>>n1;
    fout.write((char*)&n,sizeof(n));
    fout.write((char*)&n1,sizeof(n1));
    fout.close();
    int m,m1;
    ifstream fin("final.dat",ios::binary);
    fin.read((char*)&m1,sizeof(m1));
    fin.read((char*)&m,sizeof(m));
    int ar=0,temp=m;
    while(m>0)
    {
        int n=m%10;
        m=m/10;
        ar+=n*n*n;
    }
    if(temp==ar)
        cout<<"Armstrong no\n";
    fin.close();
    
    return 0;
}