#include<iostream>
using namespace std;
class Person
{
    string name;
    int age;
    public:
    Person(string,int);
    
    void displayPerson();
    

};
Person::Person(string a,int b)
{
    name=a;
    age=b;
}
void Person::displayPerson()
{ 
    std::cout<<"name:"<<name<<" age:"<<age;
}
class Student:public Person
{
    int rnum;
    int marks;
    public:
    Student(string,int,int,int);
    void display();


};
Student::Student(string a,int b,int c,int d):Person(a,b)
{
    rnum=c;
    marks=d;
}
void Student::display()
{
    displayPerson();
    std::cout<<"  roll number: "<<rnum<<" marks:"<<marks<<endl;
}
int main()
{
  Student s1("saqib",24,12,34);
  s1.display();
}