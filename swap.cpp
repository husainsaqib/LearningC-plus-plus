#include<iostream>
#include<string>
using namespace std;

template<class T>
void swapValues(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a=10,b=20;
    float x=2.5f,y=5.5f;
    string s1="Hello",s2="World";

    swapValues(a,b);
    cout<<"Integers: "<<a<<" "<<b<<endl;

    swapValues(x,y);
    cout<<"Floats: "<<x<<" "<<y<<endl;

    swapValues(s1,s2);
    cout<<"Strings: "<<s1<<" "<<s2<<endl;

    return 0;
}