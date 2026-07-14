#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Enter 10 integers to enter:\n";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    ofstream fout;
    fout.open("file.txt");
    for(int i=0;i<10;i++)
    {
        fout<<arr[i]<<" ";
    }
    fout.close();
    ifstream fin("file.txt");
    int n;
    int s;
    cout<<"Enter search element:";
    cin>>s;
    while(fin>>n)
    {
        if(n==s){
            cout<<"Search element found!!\n";
            break;
        }
    }
    
    fin.close();
    return 0;
}