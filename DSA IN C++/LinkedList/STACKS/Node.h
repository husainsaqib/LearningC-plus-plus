class Node
{
int data;
Node* next;
public:
Node()
{
    data=0;
    next=nullptr;
}
Node(int data)
{
    this->data=data;
    next=nullptr;
}
};