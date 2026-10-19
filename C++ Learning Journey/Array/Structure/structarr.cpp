#include<iostream>
using namespace std;
struct student
{
    int stuid;
    char name[20];
    int marks;


};
student read()
{
    student s;
    cout<<"Enter student ID: ";
    cin>>s.stuid;
    cout<<"Enter student name: ";
    cin>>s.name;
    cout<<"Enter student marks";
    cin>>s.marks;
    return s;
}
void display(student *ptr)
{
cout<<"display details"<<endl;
cout<<ptr->stuid<<endl;
cout<<ptr->name<<endl;
cout<<ptr->marks<<endl;


}
int main()
{
student s[3];
cout<<"ENTER DETAILS"<<endl;
for(int i=0;i<3;i++)
{
	s[i]=read();
}
for(int i=0;i<3;i++)
{
	display(&s[i]);
}

return 0;




}