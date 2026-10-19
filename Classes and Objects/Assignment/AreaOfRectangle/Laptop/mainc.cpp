#include"input.cpp"
int main()
{ char ab[20];
    int p,q;
    std::cout<<" enter brand name ram price"<<endl;
    cin>>ab;
    cin>>p;
    cin>>q;
    Laptop l(ab,p,q);
    l.display();

}