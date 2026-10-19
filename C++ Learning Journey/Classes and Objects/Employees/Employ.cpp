#include<iostream>
#include"Employee.h"
using namespace std;
void Employee::getDetails()
{ 
	std::cout<<"enter name"<<endl;
	cin>>name;
	std::cout<<"enter designation"<<endl;
	cin>>designation;
	std::cout<<"Enter salary"<<endl;
	cin>>salary;
}
void Employee::display(int *p,int n)
{
		std::cout<<"name:"<<name<<" designation:"<<designation<<" salary"<<endl;
	
	
}
int Employee::getsalary()
{
	return salary;
}