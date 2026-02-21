#include<iostream>
using namespace std;
void getInput(int &n1, int &n2)
 {
    cout << "Enter n1: ";
    cin >> n1;
    cout << "Enter n2: ";
    cin >> n2;
}

void swap(int &n1, int &n2)
 {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
 {
    int n1, n2;
    getInput(n1, n2);
    swap(n1, n2);

    cout << "After swapping:" << endl;
    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;

    return 0;
}

