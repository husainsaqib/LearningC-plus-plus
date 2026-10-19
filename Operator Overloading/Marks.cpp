#include <iostream>
using namespace std;
class Marks
{
    int total;

public:
    Marks(int t=0)
    {
        total=t;
    }
    Marks& operator+=(int marks)
    {
        total+=marks;
        return *this;
    }
    void display()
    {
        cout<<"Total marks:"<<total<<endl;
    }

};
int main()
{
    Marks m(250);
    m.display();
    m+=80;
    m.display();
    m+=70;
    m.display();
    return 0;
}
