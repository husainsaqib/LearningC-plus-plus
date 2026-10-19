/*
wap to multiply two matrix
*/
#include<iostream>
using namespace std;
int main()
{
  int row,col;
  std::cout<<"enter the rows and columns"<<endl;
  cin>>row>>col;

  int a[row][col];
  int b[col][row];
  std::cout<<"Enter the elements of first matrix"<<endl;
  for(int i=0;i<row;i++)
     for(int j=0;j<col;j++)
        cin>>a[i][j];
   std::cout<<"Enter the elements of second matrix"<<endl;
  for(int i=0;i<col;i++)
     for(int j=0;j<row;j++)
        cin>>a[i][j];


  int c[row][col];
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<col;j++)
    {
        c[i][j]=0;
        for(int k=0;k<col;k++)
        {
            c[i][j]+=a[i][k]*b[k][j];
        }
    }
  }
  std::cout<<'[';
  for(int i=0;i<col;i++)
  {
    for(int j=0;j<col;j++)
    {
    cout<<c[i][j];
    }
  }
  std::cout<<']';
}