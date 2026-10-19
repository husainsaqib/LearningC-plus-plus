#include<iostream>
#include"Student.h"
using namespace std;
void Student::getDetails()
{
    std::cout<<"Enter roll number";
    cin>>roll_number;
    std::cout<<"Enter name"<<endl;
    cin>>name;
    std::cout<<"Enter marks"<<endl;
    cin>>marks;
}
char Student::calculateGrade()
{
    if(marks>90)
      return 'A';
    else if(marks>75 && marks<=90)
      return 'B';
    else if(marks>60 && marks<=75)
      return 'C';
    else
       return 'D';
}
void Student::display()
{
    std::cout<<"Roll Numeber:"<<roll_number<<" name:"<<name<<" marks:"<<marks<<endl;
}