#include<iostream>
using namespace std;
class Matrix
{
    int data[10][10],rows,col,sc;
    public:
    void getMatrix()
    {
        cout<<"Enter the rows and col of matrix:";
        cin>>rows>>col;
        cout<<"Enter the elements of matrix:\n";
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<col;j++)
            {
                cin>>data[i][j];
            }
        }
        cout<<"Enter scalar value:";
        cin>>sc;
    }
    void diagonalSum()
    {
        int sum=0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(i==j)
                    sum+=data[i][j];
            }
        }
        cout<<"The diagonal sum is:"<<sum<<endl;
    }
    void ScalarMultiply()
    {
     
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<col;j++)
            {
                data[i][j]*=sc;     
            }
        }
        cout<<"\nScalar MUltiplication Result:\n";
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<data[i][j]<<" ";     
            }
            cout<<endl;
        }
    }
 };   
 int main()
 {
    Matrix m;
    m.getMatrix();
    m.diagonalSum();
    m.ScalarMultiply();
    return 0;
 }   
        
    
