#include<iostream>
#include<string>
using namespace std;
int main()
{
    string text,keyword;
    cout<<"Enter message:";
    getline(cin,text);
    cout<<"Enter keyword:";
    getline(cin,keyword);
    int pos=0,vcount=0,a=0,e=0,i=0,o=0,u=0,word=0;
    while((pos=text.find_first_of("AEIOUaeiou",pos))!=-1)
    {
        
        vcount++;
        if(text[pos]=='A'||text[pos]=='a')
            a++;
        else if(text[pos]=='E'||text[pos]=='e')
            e++;
        else if(text[pos]=='I'||text[pos]=='i')
            i++;
        else if(text[pos]=='O'||text[pos]=='o')
            o++;
        else if(text[pos]=='U'||text[pos]=='u')
            u++;
        pos++;
    }
    pos=0;
    while((pos=text.find(" ",pos))!=-1)
    {
        if(text.at(pos-1)!=' ')
              word++;
        pos++;
    }
    int ind=text.find(keyword);
    cout<<"Details of Message:\n";
    cout<<"Total Vowels="<<vcount<<endl;
    cout<<"Particular Vowel Count:\n A="<<a<<",E="<<e<<",I="<<i<<",O="<<o<<",U="<<u<<endl;
    cout<<"Total Words:"<<word+1<<endl;
    if(ind==-1)
        cout<<"The keyword is not found in message\n";
    else
        cout<<"The keyword is found in index "<<ind<<endl;
    return 0;
  }
    
