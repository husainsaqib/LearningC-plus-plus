#include<iostream>
using namespace std;

class Account{
protected:
    double balance;

public:
    Account(double b){
        balance=b;
    }

    virtual void withdraw(double amount){
        if(amount>0&&amount<=balance){
            balance-=amount;
            cout<<"Withdrawal successful"<<endl;
        }
        else{
            cout<<"Insufficient balance or invalid amount"<<endl;
        }
    }

    virtual void showBalance(){
        cout<<"Balance: "<<balance<<endl;
    }

    virtual ~Account(){}
};

class SavingsAccount:public Account{
public:
    SavingsAccount(double b):Account(b){}

    void withdraw(double amount) override{
        if(amount>0&&balance-amount>=1000){
            balance-=amount;
            cout<<"Savings withdrawal successful"<<endl;
        }
        else{
            cout<<"Minimum balance of 1000 must be maintained"<<endl;
        }
    }
};

class CurrentAccount:public Account{
    double overdraftLimit;

public:
    CurrentAccount(double b,double limit):Account(b){
        overdraftLimit=limit;
    }

    void withdraw(double amount) override{
        if(amount>0&&balance-amount>=-overdraftLimit){
            balance-=amount;
            cout<<"Current account withdrawal successful"<<endl;
        }
        else{
            cout<<"Overdraft limit exceeded or invalid amount"<<endl;
        }
    }
};

int main(){
    SavingsAccount s(10000);
    CurrentAccount c(5000,3000);

    Account* a;

    a=&s;
    a->withdraw(3000);
    a->showBalance();

    a=&c;
    a->withdraw(7000);
    a->showBalance();

    return 0;
}