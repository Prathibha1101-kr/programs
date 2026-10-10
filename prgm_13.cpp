//Reverse an Array Using Pointers
#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i, temp;
    int *start, *end;

    cout << "Enter number of elements: ";
    cin >> n;

    if(n < 1 || n > 100)
    {
        cout << "Invalid array size";
        return 0;
    }

    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
        cin >> a[i];

    start = a;
    end = a + n - 1;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    cout << "Reversed array: ";
    for(i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}