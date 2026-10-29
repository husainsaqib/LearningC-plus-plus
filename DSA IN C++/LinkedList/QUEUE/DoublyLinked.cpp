#include <iostream>
using namespace std;
class pNode
{
public:
    pNode *prev;
    int data;
    pNode *next;
    pNode()
    {
        prev=next=NULL;
        data=0;
    }
    pNode(int data)
    {
        prev=next=NULL;
        this->data=data;
    }
};
class DoublyLinked
{
    pNode *head;
    pNode *last;
    int count;
public:
    DoublyLinked()
    {
        head=last=NULL;
        count=0;
    }
    void create(int n)
    {
        int value;
        for(int i=0;i<n;i++)
        {
            cout<<"Enter value"<<endl;
            cin>>value;
            pNode *nd=new pNode(value);
            if(head==NULL)
                head=last=nd;
            else
            {
                last->next=nd;
                nd->prev=last;
                last=nd;
            }
            count++;
        }
    }
    void insertbegin(int value)
    {
        pNode *nd=new pNode(value);
        if(head==NULL)
            head=last=nd;
        else
        {
            nd->next=head;
            head->prev=nd;
            head=nd;
        }
        count++;
    }
    void insertLast(int value)
    {
        pNode *nd=new pNode(value);
        if(head==NULL)
            head=last=nd;
        else
        {
            last->next=nd;
            nd->prev=last;
            last=nd;
        }
        count++;
    }
    void addBetween(int pos,int value)
    {
        if(pos<2 || pos>count)
        {
            cout<<"Invalid Position"<<endl;
        }
        else
        {
            pNode *nd=new pNode(value);
            pNode *t=head;
            for(int i=1;i<pos-1;i++)
                t=t->next;
            nd->prev=t;
            nd->next=t->next;
            t->next->prev=nd;
            t->next=nd;
            count++;
        }
    }
    void deletebegin()
    {
        if(head==NULL)
            cout<<"List is already empty"<<endl;
        else
        {
            pNode *t=head;
            if(head==last)
                head=last=NULL;
            else
            {
                head=head->next;
                head->prev=NULL;
            }
            delete t;
            count--;
        }
    }
    void deleteLast()
    {
        if(head==NULL)
            cout<<"List is already empty"<<endl;
        else
        {
            pNode *t=last;
            if(head==last)
                head=last=NULL;
            else
            {
                last=last->prev;
                last->next=NULL;
            }
            delete t;
            count--;
        }
    }
    void deleteBetween(int pos)
    {
        if(pos<2 || pos>=count)
            cout<<"Invalid position"<<endl;
        else
        {
            pNode *t=head;
            for(int i=1;i<pos;i++)
                t=t->next;
            t->prev->next=t->next;
            t->next->prev=t->prev;
            delete t;
            count--;
        }
    }
    void display()
    {
        if(head==NULL)
            cout<<"List is empty"<<endl;
        else
        {
            pNode *t=head;
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
    DoublyLinked l;
    l.create(4);
    l.display();
    cout<<"Insert at beginning"<<endl;
    l.insertbegin(30);
    l.display();
    cout<<"Insert at last"<<endl;
    l.insertLast(40);
    l.display();
    cout<<"Insert at position"<<endl;
    l.addBetween(3,9);
    l.display();
    cout<<"Delete begin"<<endl;
    l.deletebegin();
    l.display();
    cout<<"Delete at last"<<endl;
    l.deleteLast();
    l.display();
    cout<<l.count<<endl;
    cout<<"Delete between"<<endl;
    l.deleteBetween(2);
    l.display();
    return 0;
}