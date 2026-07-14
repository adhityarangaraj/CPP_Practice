#include<iostream>
using namespace std;
class arr
{
    int arr1[100];
    int size;
    public:
    void get()
    {
        cout<<"Enter the size:";
        cin>>size;
        cout<<"Enter array elements:\n";
        for(int i=0;i<size;i++)
        {   
            cout<<"arr["<<i<<"]=";
            cin>>arr1[i];
        }
    }
    void operator++()
    {
        for(int i=0;i<size;i++)
        {
            arr1[i]++;
        }
    }
    void disp()
    {
        cout<<"Elements of array:\n";
        for(int i=0;i<size;i++)
        {
            cout<<arr1[i]<<" ";
        }
    }
    friend arr operator+(const arr& a,const arr& b);
};
arr operator+(const arr& a,const arr& b)
{
    arr temp;
    
    if(a.size!=b.size)
    {
        cout<<"Incompatible\n";
        temp.size=0;
        return temp;
    }
    temp.size=a.size;
    for(int i=0;i<a.size;i++)
    {
        temp.arr1[i]=a.arr1[i]+b.arr1[i];
    }
    return temp;
}
int main()
{
    arr a,b;
    a.get();
    b.get();
    arr c=a+b;
    ++a;
    a.disp();
    c.disp();
    return 0;
}