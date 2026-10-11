#include <iostream>
#include "BookIssue.cpp"

using namespace std;

int main()
{
    LibraryBook b1;

    b1.get();

    cout << "\n--- Book Details ---" << endl;
    b1.display();

    cout << "\n--- Issuing Book ---" << endl;
    b1.issueBook();

    cout << "\n--- Book Details After Issue ---" << endl;
    b1.display();

    cout << "\n--- Trying to Issue Again ---" << endl;
    b1.issueBook();

    cout << "\n--- Returning Book ---" << endl;
    b1.returnBook();

    cout << "\n--- Book Details After Return ---" << endl;
    b1.display();

    return 0;
}