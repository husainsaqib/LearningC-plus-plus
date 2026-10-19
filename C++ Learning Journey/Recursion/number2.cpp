#include<iostream>
using namespace std;
void fun(int,int);
void fun(int n,int a)
{
    if((a-1)==n)
      return ;
    fun(n,a+1);
    std::cout<<a<<endl;
}
int main()
{
	int i=1;
    int num;
    std::cout<<"Enter number"<<endl;
    cin>>num;
    fun(num,i);
}