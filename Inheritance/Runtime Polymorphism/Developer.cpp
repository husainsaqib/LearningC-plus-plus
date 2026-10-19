#include<iostream>
using namespace std;
class Employee
{
    public:
    virtual double calculateSalary()
    {
        return 0;
    } 
    virtual ~Employee()
    {

    }
};
class Manager:public Employee{
    protected:
    double basicsalary;
    double bonus;
    public:
    Manager(double a,double b)
    {
       basicsalary=a;
       bonus=b;
    }
    double calculateSalary() override
    {
        return basicsalary+bonus;
    }
    
};
class Developer:public Employee{

    protected:
    double basicsalary;
    double overtpay;
    public:
    Developer(double a,double b)
    {
        basicsalary=a;
        overtpay=b;

    }
    double calculateSalary() override
    {
        return basicsalary+overtpay;
    }
};
int main()
{
    Manager m(50000,10000);
    Developer d(50000,20000);
    Employee* e;
    e=&m;
    cout<<"Salary of manager="<<e->calculateSalary()<<endl;
    e=&d;
    cout<<"Salary of developer="<<e->calculateSalary()<<endl;
}