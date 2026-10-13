//Find the Largest Element in an Array
#include <iostream>
using namespace std;

int main()
{
    int a[5], i, max;

    cout << "Enter 5 elements: ";
    for(i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    max = a[0];

    for(i = 1; i < 5; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }

    cout << "Largest element = " << max;

    return 0;
}