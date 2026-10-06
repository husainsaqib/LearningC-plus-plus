#include <iostream>
using namespace std;
void copyString(char *source, char *destination)
{ while (*source != '\0')
    {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
}
int main()
{ char source[100];
    char destination[100];
    cout << "Enter a string: ";
    cin.getline(source, 100);
   copyString(source, destination);
    cout << "Copied string: " << destination;
    return 0;
}