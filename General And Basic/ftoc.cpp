#include <iostream>
using namespace std;

int main() {
    int choice;
    float temp, converted;

    cout << "1. Fahrenheit to Celsius" << endl;
    cout << "2. Celsius to Fahrenheit" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter Fahrenheit: ";
        cin >> temp;
        converted = (temp - 32) * 5 / 9;
        cout << "Celsius: " << converted << endl;
    } else if (choice == 2) {
        cout << "Enter Celsius: ";
        cin >> temp;
        converted = (temp * 9 / 5) + 32;
        cout << "Fahrenheit: " << converted << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}