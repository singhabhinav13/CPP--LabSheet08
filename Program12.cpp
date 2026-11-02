// Write a program to demonstrate encapsulation using a class Bank Account.
// Keep balance as a private data member and provide public functions deposit()
// and withdraw() to modify it safely.

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    // Constructor to set initial balance
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid amount or insufficient balance." << endl;
        }
    }

    // Function to display current balance
    void displayBalance() {
        cout << "Current balance: " << balance << endl;
    }
};

int main() {
    BankAccount account(5000);

    account.displayBalance();
    account.deposit(2000);
    account.withdraw(1500);
    account.withdraw(10000);
    account.displayBalance();

    return 0;
}
