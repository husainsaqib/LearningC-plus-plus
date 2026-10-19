#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int index, int target)
{
    if (index == n)
    {
        return -1;
    }
    if (arr[index] == target)
    {
        return index;
    }
    return linearSearch(arr, n, index + 1, target);
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;

    cout << "Enter element to search: ";
    cin >> target;

    int result = linearSearch(arr, n, 0, target);

    if (result == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at index " << result;
    }

    return 0;
}