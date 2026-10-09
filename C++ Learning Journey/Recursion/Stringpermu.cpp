
#include <iostream>
#include <string>
using namespace std;

void permutations(string &s, int index)
{
    if (index == s.length())
    {
        cout << s << endl;
        return;
    }
    for (int i = index; i < s.length(); i++)
    {
      
        swap(s[index], s[i]);
        permutations(s, index + 1);
        swap(s[index], s[i]);
    }
}

int main()
{
    string s;

    cout << "Enter a string: ";
    cin >> s;

    cout << "All permutations are:\n";
    permutations(s, 0);

    return 0;
}
