#include <iostream>
#include "Library.h"

using namespace std;

void LibraryBook::get()
{
    cout << "Enter Book ID: ";
    cin >> book_id;

    cout << "Enter Book Title: ";
    cin >> title;

    cout << "Enter Author Name: ";
    cin >> author;

    availability = true;
}

void LibraryBook::issueBook()
{
    if (availability == true)
    {
        availability = false;
        cout << "Book issued successfully." << endl;
    }
    else
    {
        cout << "Book is already issued." << endl;
    }
}

void LibraryBook::returnBook()
{
    if (availability == false)
    {
        availability = true;
        cout << "Book returned successfully." << endl;
    }
    else
    {
        cout << "Book is already available." << endl;
    }
}

void LibraryBook::display()
{
    cout << "\nBook ID: " << book_id << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;

    if (availability == true)
        cout << "Status: Available" << endl;
    else
        cout << "Status: Issued" << endl;
}