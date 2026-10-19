#include<iostream>
#include"Rectangel.h"
using namespace std;
Rectangel::Rectangel(int a,int b)
{
	length=a;
	breadth=b;
}
void Rectangel::area()
{
	
	std::cout<<"area of reactangle:"<<length*breadth<<endl;
}