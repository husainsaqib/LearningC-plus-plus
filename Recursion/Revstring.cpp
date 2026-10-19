
#include <iostream>
#include <string>
using namespace std;

void printSubString(string s, int n, int index,
                    string sub, int subsize);

int main()
{
    string s;

    cout << "Enter the string: ";
    cin >> s;

    string sub = "";
    printSubString(s, s.length(), 0, sub, 0);

    return 0;
}

void printSubString(string s, int n, int index,
                    string sub, int subsize)
{
    if (index == n)
    {
        for (int i = 0; i < subsize; i++)
        {
            cout << sub[i];
        }

        cout<<" ";
        return;
    }
    sub += s[index];
    printSubString(s, n, index + 1, sub, subsize + 1);
    sub = sub.substr(0, subsize);
    printSubString(s, n, index + 1, sub, subsize);
}