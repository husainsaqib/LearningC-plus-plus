class pNode
{
    pNode* prev;
    int data;
    pNode* next;
    pNode()
    {
        prev=next=null;
        data=0;

    }
    pNode(int data)
    {
        prev=next=null;
        this.data=data;
    }
};