#include <iostream>
using namespace std;

// (i) Read initial balance using reference
void getBalance(float &balance) {
    cout << "Enter initial balance: ";
    cin >> balance;
}

// (ii) Deposit with default argument of 100
void deposit(float &balance, float amount = 100) {
    balance += amount;
    cout << "Deposited: " << amount << endl;
}

// (iii) Withdraw and return the amount
float withdraw(float &balance, float amount) {
    if (amount <= balance) {
        balance -= amount;
        return amount;
    } else {
        cout << "Insufficient funds!" << endl;
        return 0;
    }
}

int main() {
    float myBalance; // Local variable

    getBalance(myBalance);
    
    // Testing deposit with default (100)
    deposit(myBalance);
    cout << "Current Balance: " << myBalance << endl;

    // Testing manual deposit
    deposit(myBalance, 500);
    cout << "Current Balance: " << myBalance << endl;

    // Testing withdrawal
    float taken = withdraw(myBalance, 200);
    cout << "Withdrew: " << taken << endl;
    cout << "Final Balance: " << myBalance << endl;

    return 0;
}