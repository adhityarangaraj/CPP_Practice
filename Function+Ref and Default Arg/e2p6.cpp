#include<iostream>
using namespace std;

double powerfun(double n, int p = 2) 
{
    double result = 1;
    for (int i = 1; i <= p; ++i)
     {
        result *= n;
    }
    return result;
}

int main() 
{
    double n;
    int p;

    cout << "Enter the base number: ";
    cin >> n;
    cout << "Enter the power (default is 2): ";
    cin >> p;

    if (p <= 0) 
    {
        cout << "Invalid input for power! Using default value of 2." << endl;
        p = 2;
    }

    double result = powerfun(n, p);
    cout << n << " raised to the power " << p << " is " << result << endl;

    return 0;
}

