#include<iostream>
using namespace std;
template <class T>
class Test
{
    T arr[100];
    int size;
    int cap;
    public:
    Test()
    {
        cout<<"Enter the no of elements:";
        cin>>size;
    }
    void insertatbeg(T x)
    {
        for(int i=size;i>=0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=x;
        size++;
    }
    void insertatend(T x)
    {
        arr[size]=x;
        size++;
    
    }
    void deletefromend()
    {
        size--;
    }
    void delete()
    {
        for(int i=0;i<size;i++)
        {
            arr[i]=arr[i+1];
        }
        size--;
    }

};