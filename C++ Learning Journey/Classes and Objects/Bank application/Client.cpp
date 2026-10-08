#include<iostream>
#include"Banck.cpp"
using namespace std;
int main()
{
   Bankaccount b1;
   b1.get();
   b1.deposit(1000);
   b1.withdraw(500);
   b1.display();
   Bankaccount b2;
   b2.get();
   b2.deposit(500);
   b2.withdraw(1000);
   b2.display();
   Bankaccount b3;
   b3.get();
   b3.deposit(1000);
   b3.withdraw(1000);
   b3.display();

}