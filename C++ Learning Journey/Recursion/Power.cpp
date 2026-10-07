#include<iostream>
using namespace std;
int power(int,int);
int sum=0;
int power(int n,int e)
{
    if(e==0)
      return sum;
    sum=sum+n*n;
    power(n,e-1);
    

    
}
int main()
{ int num,pow;
    std::cout<<"Enter number"<<endl;
    cin>>num;
    std::cout<<"enter power"<<endl;
    cin>>pow;
    int r=power(num,pow);
    std::cout<<num<<"power"<<pow<<"="<<r<<endl;

}