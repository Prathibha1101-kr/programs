//Search for an Element in an Array
#include <iostream>
using namespace std;

int main()
{
    int a[5], i, key, found = 0;

    cout << "Enter 5 elements: ";
    for(i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    for(i = 0; i < 5; i++)
    {
        if(a[i] == key)
        {
            found = 1;
            break;
        }
    }

    if(found == 1)
    {
        cout << "Element found at position " << i + 1;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}