#include <iostream>
using namespace std;
void reverseArray(int *p, int n)
{
    int *start = p;
    int *end = p + n - 1;

    while (start < end)
    {
        int temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
void display(int *p, int n)
{
    for (int i = 0; i < n; i++)
        cout << *(p + i) << " ";
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
    reverseArray(arr, n);
    cout << "Reversed array: ";
    display(arr, n);
    return 0;
}