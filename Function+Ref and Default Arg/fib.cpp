#include <iostream>
using namespace std;

// Function prototype with default arguments
void printSequence(int n, int a = 0, int b = 1) {
    cout << "Sequence: " << a << " " << b << " ";
    for (int i = 0; i < n; i++) {
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "How many next terms to print? ";
    cin >> n;

    cout << "Using default starting values (0, 1):" << endl;
    printSequence(n);

    cout << "\nUsing custom starting values (2, 3):" << endl;
    printSequence(n, 2, 3);

    return 0;
}