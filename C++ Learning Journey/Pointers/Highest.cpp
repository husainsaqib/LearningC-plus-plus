#include <iostream>
using namespace std;

int highestMark(int *p, int n)
{
    int highest = *p;

    for (int i = 1; i < n; i++)
    {
        if (*(p + i) > highest)
            highest = *(p + i);
    }

    return highest;
}

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int marks[n];

    cout << "Enter marks: ";
    for (int i = 0; i < n; i++)
        cin >> marks[i];

    cout << "Highest mark: " << highestMark(marks, n);

    return 0;
}   