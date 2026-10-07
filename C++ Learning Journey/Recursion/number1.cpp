#include<iostream>
using namespace std;
void fun(int);
void fun(int n)
{
    if(n==0)
      return ;
    fun(n-1);
    std::cout<<n<<endl;
}
int main()
{
    int num;
    std::cout<<"Enter number"<<endl;
    cin>>num;
    fun(num);


}