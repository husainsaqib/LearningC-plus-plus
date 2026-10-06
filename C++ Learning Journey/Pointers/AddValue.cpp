#include <iostream>
using namespace std;

void displayAddressValue(int *p, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Address: " << (p + i)
             << " Value: " << *(p + i) << endl;
    }
}

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    displayAddressValue(arr, n);

    return 0;
}