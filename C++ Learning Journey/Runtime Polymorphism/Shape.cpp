// Create a base class Shape with a virtual function area(). Derive classes Circle and Rectangle that override area(). Demonstrate run-time polymorphism by storing different shapes in a base class pointer.
#include<iostream>
using namespace std;

class Shape
{
    public:
    virtual double area()
    {
        return 0;
    }
    virtual ~Shape()
    {}


};
class Circle:public Shape
{
    int radius;
    public:
    Circle(int r)
    {
        radius=r;
    }
    double area() override
    {
        return 3.14*radius*radius;
    }
};
class Rectangle:public Shape
{
    int length;
    int width;
    public:
    Rectangle(int l,int w)
    {
        length=l;
        width=w;
    }
    double area() override
    {
        return length*width;
    }
};
int main()
{
    Circle c(5);
    Rectangle r(10,2);
    Shape* s;
    s=&c;
    cout<<"Area of Circle"<<s->area()<<endl;
    s=&r;
    cout<<"Area of Rectangle"<<s->area()<<endl;

}
