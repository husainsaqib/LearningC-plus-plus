#include<iostream>
#define size 5
using namespace std;
void input(int);
void display(int);

void input(int *p)
{
	std::cout<<"enter the elements"<<endl;
	
  for(int i=0;i<size;i++)	
     cin>>p[i];
}
void display(int *p)
{  
    std::cout<<"Elements in insertion order"<<endl;
	for(int i=0;i<size;i++)
	  std::cout<<p[i]<<endl;
}

int main()
{ 
    int arr[size];
    input(arr);
    display(arr);
    
}