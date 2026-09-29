/*
Input an array of Integers and sort then in ascending order
*/
#include<iostream>
#define size 5
using namespace std;
void input(int);
void sort(int);
void input(int *p)
{
	for(int i=0;i<size;i++)
	  cin>>p[i];
}
void sort(int *p)
{
	int temp;
	for(int i=0;i<size;i++)
	{
		for(int j=1;j<size-i;j++)
		{
			if(p[j]>p[i])
			{
				temp=p[j];
				p[j]=p[i];
				p[i]=temp;
			}
		}
	}
	std::cout<<"Elements in sorted manner"<<endl;
	for(int i=0;i<size;i++)
	  std::cout<<p[i]<<" ";
}
int main()
{
	int arr[size];
	std:cout<<"Enter the elements"<<endl;
	input(arr);
	sort(arr);
}