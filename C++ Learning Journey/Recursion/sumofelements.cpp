#include<iostream>

using namespace std;
int sum=0;
int sumOfElements(int a[],int);
int sumOfElements(int a[],int n)
{ 
    if(n==0)
      return sum;
    sum=sum+a[n-1];
    sumOfElements(a,n-1);
    
}
int main()
{
    int n;
    std::cout<<"enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    std::cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int r=sumOfElements(arr,n);
    std::cout<<"Sum of elements of array:"<<r<<endl;

}