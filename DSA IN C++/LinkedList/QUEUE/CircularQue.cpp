#include<iostream>
using namespcae std;
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
class CircularQueue
{
    qNode *front;
    qNode *rear;
    int count;
    public:
    CircularQueue()
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
            rear->next=front;
        }
        else
        {
            rear->next=nd;
            rear=nd;
            rear->next=front;
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
        else if(front==rear)
        {
            data=front->data;
            delete front;
            front=rear=NULL;
            count--;
        }
        else{
            qNode *t=front;
            data=front->data;
            front=front->next;
            rear->next=front;
            delete t;
            count--;
        }
        return data;
    }
    void display()
    {
        if(front==NULL)
        {
            cout<<"Queue is empty"<<endl;
        }
        else{
            qNode *t=front;
            do
            {
                cout<<t->data<<endl;
                t=t->next;
            } while (t!=front);
            
            
        }
    }
};
int main()
{
    CircularQueue cq;
       cq.enque(10);
    cq.enque(20);
    cq.enque(30);
    cq.enque(40);
    cq.enque(50);
    cq.display();
    cout<<"Remove element"<<endl;
    cout<<cq.deque()<<endl;
    return 0;
}