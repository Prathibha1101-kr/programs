//Swap Two Numbers Using Pointers
#include <iostream>
using namespace std;

void swapNumbers(int *p, int *q)
{
    int temp;

    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swapping: " << a << " " << b << endl;

    swapNumbers(&a, &b);

    cout << "After swapping: " << a << " " << b;

    return 0;
}