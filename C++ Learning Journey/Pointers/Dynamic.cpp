#include <iostream>
#include <cstring>
using namespace std;

void inputNames(char **names, int n)
{
    for (int i = 0; i < n; i++)
    {
        names[i] = new char[100];

        cout << "Enter name of student " << i + 1 << ": ";
        cin.getline(names[i], 100);
    }
}

void displayNames(char **names, int n)
{
    cout << "\nStudent Names:\n";

    for (int i = 0; i < n; i++)
        cout << i + 1 << ". " << names[i] << endl;
}

void freeMemory(char **names, int n)
{
    for (int i = 0; i < n; i++)
        delete[] names[i];

    delete[] names;
}

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;
    cin.ignore();

    char **names = new char*[n];

    inputNames(names, n);
    displayNames(names, n);
    freeMemory(names, n);

    return 0;
}