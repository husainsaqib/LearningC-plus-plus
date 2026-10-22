
#include<iostream>
using namespace std;


struct node { 
    int data; 
    node* next; 
}; 

class LinkedList {
    node* head; 
    int count; 

public: 
    LinkedList() { 
        head = nullptr; 
        count = 0; 
    } 

    void create(int n) { 
        int value; 
        for(int i = 0; i < n; i++) { 
            cout<<"Enter value: "; 
            cin>>value; 
            
            
            node* nd =new node(); 
            nd->data =value;
            nd->next =nullptr;

            if(head == nullptr) { 
                head = nd; 
            } else { 
                node* t = head; 
                while(t->next != nullptr) { 
                    t = t->next; 
                } 
                t->next = nd; 
            } 
            count++; 
        } 
    }
    void addBegin(int value)
    {
        node* nd;
        nd->data=value;
        if(head==nullptr)
          head=nd;
        else
        {
            nd->next=head;
            head=nd;
            
        }
        count++;
    }
    void addLast(int value)
    {
        node * nd=new node(value);
        if(head==nullptr)
        {
            head=nd;
           
        }
        else{
        while(t->next!=nullptr)
        {
            t=t->next;
        }
        t->next=nd;
        
        }
        count++;

    }
    void addBetween(int pos,int value)
    {
         if(pos>count||count<2)
         {
            cout<<"Invalid position";
         }
         else{
            node* t=head;
            node* nd=new node(value);
            for(int i=1;i<pos-1;i++)
            {
                t=t->next;
            }
            nd->next=t->next;
            nd->next=t;
         }
    }
    void display() { 
        node* t = head; 
        while(t != nullptr) { 
            cout << t->data << " "; 
            t = t->next; 
        } 
        cout << endl;
    } 
}; 

int main() { 
    LinkedList l; 
    l.create(3); 
    l.display();
    cout<<" -----------------";
   l.addBegin();
   l.display();
    cout<<" -----------------";
   l.addLast(23);
   l.display();
    cout<<" -----------------";
   l.addBetween(3);;
   l.display();
    cout<<" -----------------";
    return 0;
}
