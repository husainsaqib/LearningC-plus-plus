#include <iostream>
#include "Complex2.h"

using namespace std;

Complex2::Complex2(int r, int i)
{
    real = r;
    imag = i;
}

Complex2 Complex2::add(Complex2 c)
{
    Complex2 temp(0, 0);

    temp.real = real + c.real;
    temp.imag = imag + c.imag;

    return temp;
}

void Complex2::display()
{
    cout << real;

    if (imag >= 0)
        cout << " + " << imag << "i" << endl;
    else
        cout << " - " << -imag << "i" << endl;
}