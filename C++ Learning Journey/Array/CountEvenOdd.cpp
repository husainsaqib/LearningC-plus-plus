/*
Store  20 numbers in an array and tell how many are even and odds
*/

#include<iostream>
#define size 20
void input(int);
void count(int);
void input(int *p)
{
  for(int i=0;i<size;i++)
  {
  	std::cin>>p[i];
  }
     
}
void count(int *p)
{
int ceven=0,codd=0;
	for(int i=0;i<size;i++)
	{
		if(p[i]%2==0)
		   ceven++;
		else
		   codd++;
	}
	std::cout<<"Count of Even numbers:"<<ceven<<" ";
	std::cout<<"Count of Odd numbers:"<<codd;
}
using namespace std;
int main()
{
	int arr[size];
   std::cout<<"Enter the elements of array"<<endl;
	input(arr);
	count(arr);
	
}