#include<iostream>
using namespace std;
void swap(int *ptr,int *ptr1);
void swap(int *ptr,int *ptr1)
{
    int temp;
    temp=*ptr;
    *ptr=*ptr1;
    *ptr1=temp;
    std::cout<<"Numbers after swapping"<<endl;
    std::cout<<*ptr<<endl;
    std::cout<<*ptr1<<endl;

}
int main()
{
int a,b;
    std::cout<<"Enter two numbers"<<endl;
    cin>>a>>b;
    swap(&a,&b);

    return 0;
}