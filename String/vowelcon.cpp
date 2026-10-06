#include<iostream>
using namespace std;
int main()
{ 
    char name[20];
    std::cout<<"Enter the string"<<endl;
    cin>>name;
    int cv=0,cc=0;
    for(int i=0;i<sizeof(name);i++)
    {
        if(name[i]=='A'||name[i]=='E'||name[i]=='O'||name[i]=='U'||name[i]=='I'||name[i]=='a'||name[i]=='e'||name[i]=='o'||name[i]=='u'||name[i]=='i')
        {
           cv++;
        }
        else
        {
            cc++;
        }
    }
    cout<<"No of Vowels"<<cv<<endl;
    cout<<"No of COnsonants"<<cc<<endl;
    return 0;
}