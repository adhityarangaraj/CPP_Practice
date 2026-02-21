#include<iostream>
using namespace std;


inline float add(float a, float b) 
{
    return a + b;
}

inline float subtract(float a, float b) 
{
    return a - b;
}

inline float multiply(float a, float b)
 {
    return a * b;
}

inline float divide(float a, float b) 
{
    if (b != 0)
        return a / b;
     else 
     {
        cout << "Error! Division by zero." << endl;
        return 0; 
    }
}

int main()
 {
    int ch;
    float num1, num2;

    
       
        cout << "Menu: \n";
        cout << "1. Add \n";
        cout << "2. Sub \n";
        cout << "3. Mult \n";
        cout << "4. Div \n";
        cout << "5. Exit \n";
        cout << "Choose Op: ";
        cin >> ch;
        if (ch == 5) 
        {
            cout << "Exiting!!!" << endl;
            return 0;
        }

        
        cout << "Enter Values: ";
        cin >> num1 >> num2;

        
        switch (ch) {
            case 1:
                cout << "Result: " << add(num1, num2) << endl;
                break;
            case 2:
                cout << "Result: " << subtract(num1, num2) << endl;
                break;
            case 3:
                cout << "Result: " << multiply(num1, num2) << endl;
                break;
            case 4:
                cout << "Result: " << divide(num1, num2) << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
                break;
        }
    

    return 0;
}

