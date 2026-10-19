
#include <iostream>
using namespace std;

class BankAccount
{
    double balance;

public:
    BankAccount(double b)
    {
        balance = b;
    }

    bool operator>(BankAccount obj)
    {
        return balance > obj.balance;
    }
};

int main()
{
    BankAccount a(50000);
    BankAccount b(30000);

    if (a > b)
        cout << "Account A has greater balance";
    else
        cout << "Account B has greater or equal balance";

    return 0;
}
