#include<iostream>
using namespace std;
float computeVolume(float rad=4.5,float ht=7)
{
    return 3.14*rad*rad*ht;
 }
int main()
{
float ht,r;
    cout<<"Volume (default radius 4.5 and height = 7.0): "<< computeVolume()<<endl;
    cout<<"Enter height:";
    cin>>ht;
    cout<<"Volume (default radius 4.5 ): "<< computeVolume(ht)<<endl;
    cout<<"Enter radius:";
    cin>>r;
    cout<<"Volume (with user given values): "<< computeVolume(r,ht)<<endl;
    return 0;
 }    
