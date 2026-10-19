#include <iostream>
using namespace std;

struct BankAccount {
    long long accountNumber;
    string name;
    double balance;
};

void input(BankAccount &b) {
    cout << "Enter account number: ";
    cin >> b.accountNumber;

    cout << "Enter name: ";
    cin >> b.name;

    cout << "Enter balance: ";
    cin >> b.balance;
}

void display(BankAccount b) {
    cout << "Account Number: " << b.accountNumber << endl;
    cout << "Name: " << b.name << endl;
    cout << "Balance: " << b.balance << endl;
}

int main() {
    int n;

    cout << "Enter number of customers: ";
    cin >> n;

    BankAccount accounts[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of customer " << i + 1 << endl;
        input(accounts[i]);
    }

    cout << "\nCustomers with balance less than Rs. 1000:\n";

    for (int i = 0; i < n; i++) {
        if (accounts[i].balance < 1000) {
            display(accounts[i]);
            cout << endl;
        }
    }

    return 0;
}