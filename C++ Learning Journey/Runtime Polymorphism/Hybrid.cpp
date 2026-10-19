#include<iostream>
using namespace std;

class Person{
protected:
    string name;

public:
    void getPerson(){
        cout<<"Enter name: ";
        cin>>name;
    }

    void showPerson(){
        cout<<"Name: "<<name<<endl;
    }
};

class Student:virtual public Person{
protected:
    int rollNumber;

public:
    void getStudent(){
        cout<<"Enter roll number: ";
        cin>>rollNumber;
    }

    void showStudent(){
        cout<<"Roll Number: "<<rollNumber<<endl;
    }
};

class Exam:virtual public Student{
protected:
    int marks;

public:
    void getExam(){
        cout<<"Enter exam marks: ";
        cin>>marks;
    }

    void showMarks(){
        cout<<"Exam Marks: "<<marks<<endl;
    }
};

class Sports:virtual public Student{
protected:
    int marks;

public:
    void getSports(){
        cout<<"Enter sports marks: ";
        cin>>marks;
    }

    void showMarks(){
        cout<<"Sports Marks: "<<marks<<endl;
    }
};

class Result:public Exam,public Sports{
public:
    void getResult(){
        getPerson();
        getStudent();
        getExam();
        getSports();
    }

    void showResult(){
        showPerson();
        showStudent();
        Exam::showMarks();
        Sports::showMarks();
        cout<<"Total Marks: "<<Exam::marks+Sports::marks<<endl;
    }
};

int main(){
    Result r;
    r.getResult();
    r.showResult();
    return 0;
} 