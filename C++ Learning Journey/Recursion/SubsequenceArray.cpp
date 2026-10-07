#include <iostream>
using namespace std;

void printSubsequences(int arr[], int n, int index,
                       int sub[], int subSize)
{
    if (index == n)
    {
        cout << "[ ";

        for (int i = 0; i < subSize; i++)
        {
            cout << sub[i] << " ";
        }

        cout << "]" << endl;

        return;
    }
    sub[subSize] = arr[index];

    printSubsequences(arr, n, index + 1,
                      sub, subSize + 1);

    printSubsequences(arr, n, index + 1,
                      sub, subSize);
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    int sub[n];

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nAll subsequences are:\n";

    printSubsequences(arr, n, 0, sub, 0);

    return 0;
}