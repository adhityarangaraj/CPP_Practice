#include <iostream>
using namespace std;

template <class T>
class Matrix
{
private:
T mat[10][10];
int rows, cols;

public:

void getMatrix()
{
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;
   
    cout << "Enter matrix elements:\n";
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            cin >> mat[i][j];
        }
    }

}


Matrix add(Matrix obj2)
{
Matrix result;

if(rows != obj2.rows || cols != obj2.cols)
{
cout << "Error: Matrix dimensions do not match!" << endl;
result.rows = result.cols = 0;
return result;
}

result.rows = rows;
result.cols = cols;

for(int i = 0; i < rows; i++)
{
for(int j = 0; j < cols; j++)
{
result.mat[i][j] = mat[i][j] + obj2.mat[i][j];
}
}

return result;
}


void display()
{
if(rows == 0 || cols == 0)
return;

cout << "Result Matrix:\n";
for(int i = 0; i < rows; i++)
{
for(int j = 0; j < cols; j++)
{
cout << mat[i][j] << " ";
}
cout << endl;
}
}
};

int main()
{
    Matrix<int> m1, m2, m3;
    cout << "Enter the data for  First Matrix\n";
    m1.getMatrix();
    cout << "Enter the data for Second Matrix\n";
    m2.getMatrix();
    m3 = m1.add(m2);
    m3.display();
    return 0;
}