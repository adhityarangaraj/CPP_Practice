#include<iostream>
#include<fstream>
using namespace std;
class Temp
{
    public:
    int x;
    string ma;
    float wt;
    Temp()
    {

    }
    Temp(int y,string m,float w)
    {
        x=y;
        ma=m;
        wt=w;
    }
};
int main()
{
    ofstream fout("test.bin",ios::binary);
    Temp t(12,"GPT",45);
    fout.write((char*)&t,sizeof(t));
    fout.close();
    ifstream fin("test.bin",ios::binary);
    Temp t1;
    fout.read((char*)&t1,sizeof(t1));
    fin.close();
    return 0;
}