#include <iostream>
using namespace std;

void swapArrays(int *a, int *b, int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = *(a + i);
        *(a + i) = *(b + i);
        *(b + i) = temp;
    }
}

void display(int *p, int n)
{
    for (int i = 0; i < n; i++)
        cout << *(p + i) << " ";
    cout << endl;
}

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    int a[n], b[n];

    cout << "Enter first array: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter second array: ";
    for (int i = 0; i < n; i++)
        cin >> b[i];

    swapArrays(a, b, n);

    cout << "First array after swapping: ";
    display(a, n);

    cout << "Second array after swapping: ";
    display(b, n);

    return 0;
}