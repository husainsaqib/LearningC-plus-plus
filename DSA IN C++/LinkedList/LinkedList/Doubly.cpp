#include<iostream>
#include"pNode.h"
using namespace std;

class CircularDoub
{
    pNode* head;
    pNode* last;
    int count;
    CircularDoub()
    {   
        head=last=null;
        count=0;
    }
    void create(int n)
    {
        
        int value;
        for(int i=0;i<n;i++)
        { 
            cout<<"Enter value"<<endl;
            cin>>value;
            pNode nd(value);
            if(head==null)
            {
                head=last=nd;
                nd->next = nd;
                nd->prev = nd;
                
            }
            else
            {
               
            	   nd->prev = last;
                   nd->next = head;

                   last->next = nd;
                   head->prev = nd;

                   last = nd;
            } 
            
            count++;
        }
     
        
    }
    void addbegin(int value)
    {
    	pNode nd(value);
    	if(head==null)
    	{
    		head=last=nd;
    		  nd->next = nd;
              nd->prev = nd;
    		
    	}
    	else
    	{
    		nd->next=head;
    		head->prev=nd;
    		nd->prev=last;
    		last->next=nd;
    		head=nd;
    	}
    	count++;
    }
    void addlast(int value)
    
    {
    	pNode nd(value);
    	if(head==null)
    	{
    		head=last=nd;
    		nd->prev=nd;
    		nd->next=nd;
    	}
    	else
    	{
    		nd->prev=last;
    		nd->next=head;
    		head->prev=nd;
    		last->next=nd;
    		last=nd;
    	}
    	count++;
    }
    void addBetween(int pos,int value)
    {
    	
    	pNode nd(value);
    	if(pos>count||count<2)
    	{
    		cout<<"Invalid Position"
    	}
    	else
    	{
    		pNode* t=head;
    		for(int i=1;i<pos-1;i++)
    		{
    			t=t.next;
    		}
    		nd->prev=t;
    		nd->next=t.next;
    		t->next.prev=nd;
    		t->next=nd;
    	}
    	count++;
    }
    void deletebegin()
    {
    	if(head==null)
    	{System.out.println("List is already empty");
    	
    	}
    	else
    	{
    		head=head->next;
    		last->next=head;
    		head->prev=last;
    		
    		
    		
    	}
    	count--;
    }
    void deletelast()
    {
    	if(head==null)
    	{
    		cout<<"list is already empty"<<endl;
    	}
    	else
    	{
    		last->prev->next=head;
    		last=last->prev;
    		head->prev=last;
    	}
    	count--;
    }
    void deletebetween(int pos)
    {
    	if(pos>count||count<2)
    	{
    		cout<<"Invalid Position"<<endl;
    	}
    	else
    	{
    		pNode* t=head;
    		for(int i=1;i<pos-1;i++)
    		{
    			t=t->next;
    		}
    		t->next=t->next->next;
    		t->next->prev=t;
    		
    	}
    	count--;
    }
    void display()
    {   if(head==null)
    {
    	cout<<"list is empty"<<endl;
    }
    else
    {
    	pNode* t=head;
    	do
    	{
    		cout<<t.data+" ";
    		t=t->next;
    	}while(t!=head);
    	cout<<endl;
    }

    }

}

public class CircularDoubly {
    public static void main(String args[])
    {
    	CircularDoub d=new CircularDoub();
    	
    	d.create(4);
    	d.display();
    	System.out.println("insert at begin");
    	d.addbegin(15);
    	d.display();
    	System.out.println("insert at last");
    	d.addlast(20);
    	d.display();
    	System.out.println("insert at between");
    	d.addBetween(3, 40);
    	d.display();
    	System.out.println("delete from begin");
    	d.deletebegin();
    	d.display();
    	d.addbegin(90);
    	System.out.println("delete from last");
    	d.deletelast();
    	d.display();
    	System.out.println("delete between");
    	d.deletebetween(3);
    	d.display();
    }
}
