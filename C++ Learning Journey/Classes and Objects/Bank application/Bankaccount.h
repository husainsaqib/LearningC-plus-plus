#include<iostream>
using namespace std;
class Bankaccount
{
private:
   int acc_number;
   char name[20];
   int balance;
public:
   void get();
   void deposit(int b);
    void withdraw(int b);
     void display();
};