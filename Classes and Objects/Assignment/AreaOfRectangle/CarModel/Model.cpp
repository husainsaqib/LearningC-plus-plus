#include"Car.cpp"
int main()
{   Car1 c[5];
    for(int i=0;i<5;i++)
    {
        c[i].getDetails();
        c[i].display();
    }
}