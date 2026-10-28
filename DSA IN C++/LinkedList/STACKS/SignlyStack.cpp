#include <iostream>

using namespace std;

 

class Node

{
public:

    int data;
    Node *next;
    Node()
     {
         data=0;
        next=NULL;
}
 Node(int data)
 {
    this->data=data;
    next=NULL;

    }
};
class StackList
{
 Node *top;
 int count;
public:
 StackList()
    {
      top=NULL;
         count=0;

    }
  void push(int value)
{
     Node *nd=new Node(value);
     nd->next=top;
     top=nd;
      count++;
 }
 int pop()
 {
 int data=0;
 if(top==NULL)
 {
 cout<<"Stack underflow"<<endl;
  }
 else
        {
            Node *t=top;
            data=top->data;
            top=top->next;
            delete t;
            count--;
        }
        return data;
    }
    void display()
    {
        if(top==NULL)
        {
            cout<<"Stack underflow"<<endl;
        }
        else
        {
            Node *t=top;
            while(t!=NULL)
            {
                cout<<t->data<<endl;
                t=t->next;
            }
        }
    }
};

int main()
{
    StackList l;
    l.push(10);
    l.push(20);
    l.push(30);
    l.display();
    cout<<"Element popped"<<endl;
    cout<<l.pop()<<endl;
    l.display();
     return 0;

}