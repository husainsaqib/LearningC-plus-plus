#include<iostream>
using namespace std;
void printSubString(char s[],int n,int index,char sub[],int subsize);
int main()
{
    char s[5];
    std::cout<<"Enter the string";
    for(int i=0;i<5;i++)
    {
        cin>>s[i];
    }
    char sub[5];

    std::cout<<"The substring of given string\n"<<endl;
    printSubString(s,5,0,sub,0);
   

}
void printSubString(char s[],int n,int index,char sub[],int subsize)
{
	if(index==n)
	{
		for(int i=0;i<subsize;i++)
		{
			cout<<sub[i];
		}
		std::cout<<" ";
		return;
	}
	sub[subsize]=s[index];
	printSubString(s,5,index+1,sub,subsize+1);
	printSubString(s,5,index+1,sub,subsize);
}