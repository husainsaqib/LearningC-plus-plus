#include <iostream>
using namespace std;
double calculateAverage(int *p, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += *(p + i);
    return (double)sum / n;
}
int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    int *marks = new int[n];
    cout << "Enter marks: ";
    for (int i = 0; i < n; i++)
        cin >> *(marks + i);
    cout << "Average marks: " << calculateAverage(marks, n);
    delete[] marks;
    return 0;
}