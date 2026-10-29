#include <iostream>
using namespace std;
class CircularQueue
{
    int arr[10];
    int max;
    int front,rear;
public:
    CircularQueue()
    {
        max=10;
        front=rear=-1;
    }
    void enque(int value)
    {
        if((rear+1)%max==front)
            cout<<"Queue is full"<<endl;
        else
        {
            if(front==-1)
                front=rear=0;
            else
                rear=(rear+1)%max;
            arr[rear]=value;
        }
    }
    int deque()
    {
        int data=0;
        if(front==-1)
            cout<<"Queue is empty"<<endl;
        else
        {
            data=arr[front];
            arr[front]=0;
            if(front==rear)
                front=rear=-1;
            else
                front=(front+1)%max;
                    }
        return data;
    }
    void display()
    {
        if(front==-1)
            cout<<"Queue is empty"<<endl;
        else
        {
            int i=front;
            while(true)
            {
                cout<<arr[i]<<endl;
                if(i==rear)
                    break;
                i=(i+1)%max;
            }
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