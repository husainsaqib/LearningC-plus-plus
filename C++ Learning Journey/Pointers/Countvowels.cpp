#include <iostream>
using namespace std;

int countVowels(char *p)
{
    int count = 0;

    while (*p != '\0')
    {
        if (*p == 'a' || *p == 'e' || *p == 'i' ||
            *p == 'o' || *p == 'u' ||
            *p == 'A' || *p == 'E' || *p == 'I' ||
            *p == 'O' || *p == 'U')
        {
            count++;
        }

        p++;
    }

    return count;
}

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Number of vowels: " << countVowels(str);

    return 0;
}   