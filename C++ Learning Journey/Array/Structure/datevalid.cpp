/*
Define a structure Date with day, month,
year. Write a program to check if the given date is valid or not.
*/
#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

bool isLeapYear(int year) {
    return (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
}

bool isValidDate(Date d) {
    if (d.year <= 0 || d.month < 1 || d.month > 12 || d.day < 1)
        return false;

    int daysInMonth;

    if (d.month == 2)
        daysInMonth = isLeapYear(d.year) ? 29 : 28;
    else if (d.month == 4 || d.month == 6 || d.month == 9 || d.month == 11)
        daysInMonth = 30;
    else
        daysInMonth = 31;

    return d.day <= daysInMonth;
}

int main() {
    Date d;

    cout << "Enter day: ";
    cin >> d.day;

    cout << "Enter month: ";
    cin >> d.month;

    cout << "Enter year: ";
    cin >> d.year;

    if (isValidDate(d))
        cout << "Valid Date";
    else
        cout << "Invalid Date";

    return 0;
}