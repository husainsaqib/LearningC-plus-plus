#include<iostream>
using namespace std;
class Employee
{
int emp_id;
string name;
int date;
int month;
int year;
public:
Employee()
{
	emp_id=123;
	name="saqib";
	date=10;
	month=2;
	year=2025;
}
Employee(int,string,int,int,int);
void show();	
};


Employee::Employee(int e,string p,int d,int m,int y)
{
	emp_id=e;
	name=p;
	date=d;
	month=m;
	year=y;
	
}
void Employee::show()
{
	std::cout<<"empid:"<<emp_id<<" name:"<<name<<" dateofjoining:"<<date<<"-"<<month<<"-"<<year;
}
class Wageperson:public Employee
{
int hrs;
int rate;
public:
Wageperson(int e,string p,int d,int m,int y,int h,int r);
void show();	
};
Wageperson::Wageperson(int e,string p,int d,int m,int y,int h,int r):Employee(e,p,d,m,y)
{
	hrs=h;
	rate=r;
}
void Wageperson::show()
{        Employee e1(1,"vcj",01,02,2006);
e1.show();
		std::cout<<" hrs:"<<hrs<<" rate:"<<rate;
}
class Salesperson:public Wageperson
{
int sal;
int comm;
public:
Salesperson(int e,string p,int d,int m,int y,int h,int r,int s,int com);
void show();
void show1();	
};
Salesperson::Salesperson(int e,string p,int d,int m,int y,int h,int r,int s,int com):Wageperson(e,p,d,m,y,h,r)
{
	sal=s;
	comm=com;
}
void Salesperson::show()
{
	  Wageperson w1(1,"vcj",01,02,2006,10,100);
      w1.show();
      std::cout<<" salary:"<<sal<<" commission "<<comm;
}
void Salesperson::show1()
{
	 std::cout<<" salary:"<<sal<<" commission "<<comm<<endl;
}
class Manager:public Employee
{
int dept;
int pro_id;
public:
Manager(int,string,int,int,int,int,int);
void show();
void show1();
};
Manager::Manager(int e,string p,int d,int m,int y,int dep,int pro):Employee(e,p,d,m,y)
{
    dept=dep;
    pro_id=pro;
}
void Manager::show()
{
 Employee e1(1,"vcj",01,02,2006);
e1.show();
		std::cout<<" department:"<<dept<<" project id:"<<pro_id;
}
void Manager::show1()
{
		std::cout<<" department:"<<dept<<" project id:"<<pro_id;
}
class Salesmanager:public Manager,public Salesperson{
int sales_id;
int price;
public:
Salesmanager(int e,string p,int d,int m,int y,int dep,int pro,int h,int r,int s,int com,int sid,int pr);
void show();
};
Salesmanager::Salesmanager(int e,string p,int d,int m,int y,int dep,int pro,int h,int r,int s,int com,int sid,int pr):Manager(e,p,d,m,y,dep,pro),Salesperson(e,p,d,m,y,h,r,s,m)
{
sales_id=sid;
price=pr;
}
void Salesmanager::show()
{
		std::cout<<" sale_id:"<<sales_id<<" price:"<<price<<endl;
}
int main()
{
	Salesmanager m1(1,"vcj",01,02,2006,12,34,5,6,3,1000,43,222);
    m1.Manager::show();
    m1.Salesperson::show1();
	Employee e1;
	e1.show();
    m1.show();
}