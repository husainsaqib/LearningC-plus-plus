#include <iostream>
using namespace std;

void countNumbers(int *p, int n, int &positive, int &negative)
{
    positive = 0;
    negative = 0;

    for (int i = 0; i < n; i++)
    {
        if (*(p + i) > 0)
            positive++;
        else if (*(p + i) < 0)
            negative++;
    }
}

int main()
{
    int n;
    int positive, negative;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    countNumbers(arr, n, positive, negative);

    cout << "Positive numbers: " << positive << endl;
    cout << "Negative numbers: " << negative << endl;

    return 0;
}