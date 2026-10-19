#include<iostream>

using namespace std;

int sumOfElements(int a[],int,int);
int sumOfElements(int a[],int n,int max)
{ 
    if(n==0)
      return max;
    if(max<a[n-1])
    {
         max=a[n-1]; 
    }
    sumOfElements(a,n-1,max);
    
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
    int max=arr[0];
    int r=sumOfElements(arr,n,max);
    std::cout<<"Maximum element of array:"<<r<<endl;

} 