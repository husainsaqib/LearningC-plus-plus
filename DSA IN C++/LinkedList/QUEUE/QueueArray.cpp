#include <iostream>
using namespace std;
 
class QueArray
{
    int arr[8];
    int max;
    int front,rear;
public:
    QueArray()
    {
        max=8;
        front=rear=-1;
    }
    void enque(int value)
    {
        if(rear==max-1)
            cout<<"Queue is full"<<endl;
        else
        {
            arr[++rear]=value;
            if(front==-1)
                front=0;
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
            if(front==rear)
                                front=rear=-1;
            else
                front++;
       }
        return data;
    }
    void display()
    {
        if(front==-1)
            cout<<"Queue is empty"<<endl;
        else
        {
            for(int i=front;i<=rear;i++)
                cout<<arr[i]<<endl;
        }
    }
};

int main()
{
    QueArray qa;
    qa.enque(10);
    qa.enque(30);
    qa.enque(40);
    qa.enque(50);
    qa.display();
    cout<<qa.deque()<<endl;
    return 0;
}

