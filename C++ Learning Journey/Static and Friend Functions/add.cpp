#include<iostream>

#include"Distance1.h"
#include"Distance2.h"
using namespace std;
Distance1::Distance1()
{
    std::cout<<"Enter the distance in meter and cm"<<endl;
    cin>>meter>>cm;
    
}
Distance2::Distance2()
{
     std::cout<<"Enter the distance in feet and inches";
    cin>>feet>>inch;
}
void Distance1::display()
{
std::cout<<"meter:"<<meter<<"centimeter"<<cm<<endl;
}
void Distance2::display()
{
std::cout<<"feet:"<<feet<<" inch"<<inch<<endl;
}
void add(Distance1 d1,Distance2 d2)
{
    int h=d1.meter+d2.feet;
    int w=d1.cm+d2.inch;
    std::cout<<h<<" "<<w<<endl;
}