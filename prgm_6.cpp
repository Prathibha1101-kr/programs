//Display Days Using Enum
#include <iostream>
using namespace std;

enum Week
{
    Monday = 1, Tuesday, Wednesday, Thursday,
    Friday, Saturday, Sunday
};

int main()
{
    Week day;

    day = Friday;

    switch(day)
    {
        case Monday:
            cout << "Monday";
            break;

        case Tuesday:
            cout << "Tuesday";
            break;

        case Wednesday:
            cout << "Wednesday";
            break;

        case Thursday:
            cout << "Thursday";
            break;

        case Friday:
            cout << "Friday";
            break;

        case Saturday:
            cout << "Saturday";
            break;

        case Sunday:
            cout << "Sunday";
            break;
    }

    return 0;
}