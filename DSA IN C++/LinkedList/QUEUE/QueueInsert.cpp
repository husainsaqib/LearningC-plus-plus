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
    void insertFirst(int value)
    {
        qNode *nd=new qNode(value);
        if(front==NULL)
            front=rear=nd;
        else
        {
            nd->next=front;
            front=nd;
        }
        count++;
    }
    void insertLast(int value)
    {
        qNode *nd=new qNode(value);
        if(front==NULL)
            front=rear=nd;
        else
        {
            rear->next=nd;
            rear=nd;
        }
        count++;
    }
    void insertAt(int pos,int value)
    {
        if(pos<1 || pos>count+1)
        {
            cout<<"Invalid Position"<<endl;
        }
        else if(pos==1)
            insertFirst(value);
        else if(pos==count+1)
            insertLast(value);
        else
        {
            qNode *nd=new qNode(value);
            qNode *t=front;
            for(int i=1;i<pos-1;i++)
                t=t->next;
            nd->next=t->next;
            t->next=nd;
            count++;
        }
    }
    int deque()
    {        int data=0;
        if(front==NULL)
            cout<<"Queue is empty"<<endl;
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
                cout<<t->data<<" ";
                t=t->next;
            }
            cout<<endl;
        }
    }
};

int main()
{
    ListQueues lq;
    lq.insertLast(10);
    lq.insertLast(20);
    lq.insertFirst(5);
    lq.insertAt(3,15);
    lq.display();
    cout<<"Removing from queue"<<endl;
    cout<<lq.deque()<<endl;
    lq.display();
    return 0;
}