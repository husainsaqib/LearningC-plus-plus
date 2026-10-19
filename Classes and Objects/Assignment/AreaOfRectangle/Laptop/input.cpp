#include<iostream>
#include<cstring>
#include"Laptop.h"
using namespace std;
Laptop::Laptop(char ab[] ,int a,int b)
{
   strcpy(name1,ab)
   ram=a;
   price=b;
}
Laptop::display()
{
    std::cout<<"brand name:"<<name1<<" ram:"<<ram<<" price:"<<price<<endl;
}