#include<iostream>
using namespace std;

class Employee{
public:
    virtual double calculatePay()=0;
    virtual ~Employee(){}
};

class HourlyEmployee:public Employee{
    double hours,rate;

public:
    HourlyEmployee(double h,double r){
        hours=h;
        rate=r;
    }

    double calculatePay() override{
        return hours*rate;
    }
};

class SalariedEmployee:public Employee{
    double monthlySalary;

public:
    SalariedEmployee(double s){
        monthlySalary=s;
    }

    double calculatePay() override{
        return monthlySalary;
    }
};

int main(){
    HourlyEmployee h(160,200);
    SalariedEmployee s(45000);

    Employee* e;

    e=&h;
    cout<<"Hourly Employee Pay: "<<e->calculatePay()<<endl;

    e=&s;
    cout<<"Salaried Employee Pay: "<<e->calculatePay()<<endl;

    return 0;
}