//Demonstrate the use of union
#include <iostream>
using namespace std;

union Data
{
    int i;
    float f;
    char c;
};

int main()
{
    Data d;

    cout << "Address of integer member: "
         << static_cast<void*>(&d.i) << endl;

    cout << "Address of float member: "
         << static_cast<void*>(&d.f) << endl;

    cout << "Address of character member: "
         << static_cast<void*>(&d.c) << endl;

    d.i = 100;

    cout << "\nInteger value = " << d.i;

    return 0;
}