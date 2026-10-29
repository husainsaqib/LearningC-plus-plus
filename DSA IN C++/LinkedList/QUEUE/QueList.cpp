#include <iostream>
using namespace std;
class qNode
{
public:
    int data;
    qNode *next;
    qNode(int data)
    {
        this->data=data;
        next=NULL;
    }
};

class ListQueues
{
    qNode *front;
    qNode *rear;
    int count;
public:
    ListQueues()
    {
        front=rear=NULL;
        count=0;
    }
    void enque(int value)
    {
        qNode *nd=new qNode(value);
        if(front==NULL)
        {
            front=rear=nd;
        }
        else
        {
            rear->next=nd;
            rear=nd;
        }
        count++;
    }
    int deque()
    {
        int data=0;
        if(front==NULL)
        {
            cout<<"Queue is empty"<<endl;
        }
        else
        {
            qNode *t=front;
            data=front->data;
            front=front->next;
            if(front==NULL)
                rear=NULL;
            delete t;
            count--;
        }
        return data;
    }
    void display()
    {
        if(front==NULL)
            cout<<"Queue is empty"<<endl;
        else
        {
            qNode *t=front;
           while(t!=NULL)
        {
            
                cout<<t->data<<endl;
                t=t->next;
            }
        }
    }
};

int main()
{    ListQueues lq;
    lq.enque(30);
    lq.enque(50);
    lq.enque(80);
    lq.enque(90);
    lq.display();
    cout<<"Removing from list"<<endl;
    cout<<lq.deque()<<endl;
    return 0;
}
