#include<iostream>
#include"Bankaccount.h"
using namespace std;
 void Bankaccount::get()
    {
          std::cout<<"Enter account number"<<endl; 
          cin>>acc_number;
          std::cout<<"Enter name"<<endl; 
          cin>>name;
          std::cout<<"Enter account balance"<<endl; 
          cin>>balance;
    }
    void Bankaccount::deposit(int b)
    {
          balance=balance+b;
    }
    void Bankaccount::withdraw(int b)
    {
        if(balance<b)
        {
            std::cout<<"Balance is low"<<endl;
        }
        else
        {
            balance=balance-b;
            std::cout<<"Withdraw successful"<<endl;
        }
    }
    void Bankaccount::display()
    {
        cout<<"balance is "<<balance<<" with account number"<<acc_number;
    }