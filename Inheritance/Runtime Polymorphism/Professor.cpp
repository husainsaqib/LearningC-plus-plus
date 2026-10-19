#include<iostream>
using namespace std;

class Teacher{
protected:
    string subject;

public:
    void getSubject(){
        cout<<"Enter subject: ";
        cin>>subject;
    }

    void showSubject(){
        cout<<"Subject: "<<subject<<endl;
    }
};

class Researcher{
protected:
    string specialization;

public:
    void getSpecialization(){
        cout<<"Enter specialization: ";
        cin>>specialization;
    }

    void showSpecialization(){
        cout<<"Specialization: "<<specialization<<endl;
    }
};

class Professor:public Teacher,public Researcher{
    string name;

public:
    void getProfessor(){
        cout<<"Enter professor name: ";
        cin>>name;
        getSubject();
        getSpecialization();
    }

    void showProfessor(){
        cout<<"Professor Name: "<<name<<endl;
        showSubject();
        showSpecialization();
    }
};

int main(){
    Professor p;
    p.getProfessor();
    p.showProfessor();
    return 0;
}