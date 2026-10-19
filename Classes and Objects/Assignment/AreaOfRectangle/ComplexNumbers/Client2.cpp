#include <iostream>
#include "Complex2.cpp"
using namespace std;

int main()
{
    Complex2 c1(3, 4);
    Complex2 c2(5, 6);

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    Complex2 c3 = c1.add(c2);

    cout << "Sum: ";
    c3.display();
    return 0;
}