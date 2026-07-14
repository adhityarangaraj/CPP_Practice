#include<iostream>
using namespace std;
class Matrix
{
    int r,c;
    int mat[10][10];
    public:
    void get()
    {
        cout<<"Enter rows and col:";
        cin>>r>>c;
        cout<<"Enter array elements:\n";
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>mat[i][j];
            }
            cout<<endl;
        }
    }
    void operator*(int sc)
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                mat[i][j]*=sc;
            }
        }
    }
    void disp()
    {
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    friend void operator*(int sc,Matrix &m);
};
void operator*(int sc,Matrix &m )
{
   
    for(int i=0;i<m.r;i++)
    {
        for(int j=0;j<m.c;j++)
        {
            m.mat[i][j]*=sc;
        }
    }
}
int main()
{
    Matrix m1,m2;
 
    m1.get();
    m2.get();
    m1*2;
    2*m2;
    m1.disp();
    m2.disp();
    return 0;
}