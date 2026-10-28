#include<iostream>

using namespace std;
class Node
{
    public:
int data;
Node* next;

Node()
{
    data=0;
    next=nullptr;
}
Node(int data)
{
    this->data=data;
    next=nullptr;
}
};
class StackList
{
int count;
Node* top;
public:
StackList()
{
    top=nullptr;
    count=0;
}
void push(int value)
{
    Node* nd=new Node(value);
    if(top==nullptr)
    {
        top=nd;
    }
    else
    {
        nd->next=top;
        top=nd;
    }
    count++;

}
void display()
{
    if(top==nullptr)
    {
        cout<<"STack Underflow";
    }
    else
    {
        Node* t=top;
        do
        {
           cout<<t->data;
           t=t->next; 
        } while (t!=nullptr);
        
    }
}
};

int main()
{
StackList l;
l.push(20);
l.push(30);
l.display();
return 0;
}

