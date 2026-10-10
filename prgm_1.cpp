//Read and display an array of 5 elements
#include <iostream>
using namespace std;

int main()
{
    int a[5], i;

    cout << "Enter 5 elements: ";
    for(i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "Array elements are: ";
    for(i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}