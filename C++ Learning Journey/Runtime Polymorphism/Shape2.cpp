#include<iostream>
using namespace std;

class Shape{
public:
    virtual double perimeter()=0;
    virtual ~Shape(){}
};

class Square:public Shape{
    double side;

public:
    Square(double s){
        side=s;
    }

    double perimeter() override{
        return 4*side;
    }
};

class Circle:public Shape{
    double radius;

public:
    Circle(double r){
        radius=r;
    }

    double perimeter() override{
        return 2*3.14159*radius;
    }
};

int main(){
    Square s(5);
    Circle c(7);

    Shape* p;

    p=&s;
    cout<<"Perimeter of Square: "<<p->perimeter()<<endl;

    p=&c;
    cout<<"Circumference of Circle: "<<p->perimeter()<<endl;

    return 0;
}