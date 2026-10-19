// Define class Teacher with subject, class Researcher with specialization, and class Professor that inherits from both.
#include<iostream>
using namespace std;
class Teacher
{
    protected:
        string subject;
    public :
    void getSubject()
    {
        cout<<"Enter subject name"<<endl;
        cin>>subject;
    }
    void showSubject()
    {
        cout<<"Subject:"<<subject<<endl;
    }
};
class Researcher
{
    protected:
    string specialization;
    public:
    void getSpecialize()
    {
        cout<<"enter specialization"<<endl;
        cin>>specialization;
    }
    void showSpecialization()
    {
        cout<<"Specialization:"<<specialization<<endl;
    }

};
class Professor:public Teacher,public Researcher
{
    protected:
    string name;
    public:
    void getProfessor()
    {
        cout<<"Enter professor name"<<endl;
        cin>>name;
        getSubject();
        getSpecialize();
    }
    void showProfessor()
    {
        cout<<"Professor name:"<<name<<endl;
        showSubject();
        showSpecialization();
    }
};
int main()
{
    Professor p;
    p.getProfessor();
    p.showProfessor();
    return 0;
}