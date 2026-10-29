void push(int value)
{
    Node4 *nd=new Node4(value);
    if(head==NULL)
    {
        head=nd;
    }
    else
    {
        top->next=nd;
    }
    top=nd;
    count++;
}
 
int pop()
{
    int data=0;
    if(head==NULL)
    {
        cout<<"Stack Underflow"<<endl;
        return data;
    }
    if(head==top)
    {
        data=top->data;
        delete top;
        head=top=NULL;
    }
    else
    {
        Node4 *t=head;
        while(t->next!=top)
            t=t->next;
        data=top->data;
        delete top;
        t->next=NULL;
        top=t;
    }
    count--;
    return data;
}