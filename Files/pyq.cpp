#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class String
{
    string str;
    public:
    void input()
    {
        cout<<"Enter the string:";
        getline(cin,str);

    }
    void disp()
    {
        cout<<str<<endl;
    }
    void modify()
    {
        for(int i=0;i<str.size();i++)
        {
            if(!isalpha(str[i]))
                continue;
            else
            {
                char ch=tolower(str[i]);
                if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                    str.replace(i,1,"$");
            }
        }
    }
    void file()
    {
        ofstream fout("word.dat",ios::binary);
        string temp;
        for(int i=0;i<str.size();i++)
        {
            char ch=tolower(str[i]);
            
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            {
                temp.push_back(str[i]);
            }
        }
        fout.write((char*)&temp,sizeof(temp));
        fout.close();
    }
};
int main()
{
    String s;
    string temp;
    s.input();
    ofstream fout("input.dat",ios::binary);
    fout.write((char*)&s,sizeof(s));
    fout.close();
    s.file();
    s.modify();
    ifstream fin("input.dat",ios::binary);
    fin.read((char*)&temp,sizeof(temp));
    fin.close();
    cout<<"INPUT FILE TEXT:\n"<<temp<<endl;
    ifstream fin("word.dat",ios::binary);
    fin.read((char*)&temp,sizeof(temp));
    fin.close();
    cout<<"WORD FILE BEFORE UPDATE:\n"<<temp<<endl;
    ofstream fout("word.dat",ios::binary);
    fout.write((char*)&s,sizeof(s));
    fout.close();
    ifstream fin("word.dat",ios::binary);
    fin.read((char*)&temp,sizeof(temp));
    fin.close();
    cout<<"WORD FILE AFTER UPDATE:\n"<<temp<<endl;
    //s.disp();
    return 0;
}