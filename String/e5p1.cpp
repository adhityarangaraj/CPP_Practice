#include<iostream>
#include<string>
using namespace std;
int main()
{
    string text;
    cout<<"Enter text:";
    getline(cin,text);
    int pos=0;
    while((pos=text.find(" ",pos))!=-1)
    {
        if(text[pos+1]!=' ')
        {
            text.insert(pos," ");
            pos+=2;
        }
        else
            pos++;
   }
   while((pos=text.find("   ",pos))!=-1)
   {
        text.erase(pos,1);
   } 
    cout<<"Text After Modification:\n"<<text<<endl;
    return 0;
}
