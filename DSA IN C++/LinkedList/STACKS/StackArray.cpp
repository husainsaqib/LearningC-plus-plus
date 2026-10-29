#include <iostream>
using namespace std;
class Stack1
{
    int arr[8];
    int max;
    int top;
public:
    Stack1()
    {
        max=8;
        top=-1;
    }
    bool isEmpty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if(top==max-1)
            return true;
        else
            return false;
    }
    void push(int value)
    {
        if(isFull())
            cout<<"Stack overflow"<<endl;
        else
            arr[++top]=value;
    }
    int pop()
    {
        int data=0;
        if(isEmpty())
        {
            cout<<"Stack underflow"<<endl;
            return data;
        }
        else
            return arr[top--];
    }
    int peek()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return -1;
        }
        return arr[top];
    }
    void display()
    {
        for(int i=0;i<=top;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
};
 
int main()
{
    Stack1 s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.display();
    cout<<"Removed element from stack"<<endl;
    cout<<s1.pop()<<endl;
    s1.display();
    cout<<"Top element of stack: "<<s1.peek()<<endl;
    return 0;
}


