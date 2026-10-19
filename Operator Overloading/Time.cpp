
#include <iostream>
using namespace std;

class Time
{
    int hours, minutes;

public:
    Time(int h, int m)
    {
        hours = h;
        minutes = m;
    }

    Time& operator++()
    {
        minutes++;

        if (minutes == 60)
        {
            minutes = 0;
            hours++;

            if (hours == 24)
                hours = 0;
        }

        return *this;
    }

    void display()
    {
        if (hours < 10)
            cout << "0";

        cout << hours << ":";

        if (minutes < 10)
            cout << "0";

        cout << minutes << endl;
    }
};

int main()
{
    Time t(10, 59);

    cout << "Before increment: ";
    t.display();

    ++t;

    cout << "After increment: ";
    t.display();

    return 0;
}
