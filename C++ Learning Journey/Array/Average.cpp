#include<iostream>
#define size 10
using namespace std;
void input(int);
int average(int);
void input(int *p)
{
  for(int i=0;i<size;i++)
     cin>>p[i];

}
int average(int *p)
{ int sum=0;
  for(int i=0;i<size;i++)
     sum+=p[i];
  return sum/size;
    
}
int main()
{
int arr[size];
std::cout<<"Enter the score of 10 matches"<<endl;
input(arr);
int a=average(arr);
std::cout<<"The average score in 10 matches:"<<a<<endl;
}