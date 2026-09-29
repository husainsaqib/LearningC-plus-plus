#include<iostream>
using namespace std;
void input(int,int);
void search(int,int,int);

void input(int *p,int a)
{

	for(int i=0;i<a;i++)
	   cin>>p[i];
}
void search(int *p,int s,int a)
{    int flag=0,count;
	for(int i=0;i<a;i++)
	{
		if(p[i]==s)
		{
		    count=i;
		    flag=1;
		    break;
		}
	}
	if(flag==1)
	{
		std::cout<<"Element found at index "<<count<<endl;
	}
	else{
		std::cout<<"Element not found"<<endl;
	}
}
int main()
{
	int size;
	std::cout<<"Enter the size"<<endl;
	cin>>size;
    int arr[size];
	std::cout<<"Enter the elements"<<endl;
	input(arr,size);
	int s;
	std::cout<<"Enter the elements to search"<<endl;
	cin>>s;
	search(arr,s,size);
	
}
