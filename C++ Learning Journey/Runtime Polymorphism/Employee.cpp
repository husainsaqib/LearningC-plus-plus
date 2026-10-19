#include<iostream>
using namespace std;
class Employee
{
     protected:
            int emp_id;
            double salary;

    public:
    void getEmployee()
    {
        cout<<"enter employee id"<<endl;
        cin>>emp_id;
        cout<<"enter employee salary"<<endl;
        cin>>salary;
    }
    void showEmployee()
    {
        cout<<"Employye id:"<<emp_id<<endl;
        cout<<"EMplyee salary:"<<salary<<endl;

    }

};
class Manager:public Employee{
string department;
public:
void getManager()
{
    getEmployee();
    cout<<"enter department"<<endl;
    cin>>department;

}
void showManager()
{
showEmployee();
cout<<"department name:"<<department<<endl;
}
};
int main()
{
    Manager m;
    m.getManager();
    m.showManager();
    return 0;
}