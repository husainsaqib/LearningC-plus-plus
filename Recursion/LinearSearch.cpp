#include<iostream>
using namespace std;
int search(int a[],int n,int x);
int search(int a[],int n,int x)
{
    
}
int main()
{
      int n,x;
    std::cout<<"enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    std::cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    std::cout<<"enter elements to be searched"<<endl;
    cin>>x;
    int r=search(arr,n,x);
    std::cout<<"Sum of elements of array:"<<r<<endl;
}