//Sort Array in Ascending and Descending Order
#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i, j, temp;

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

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "Ascending order: ";
    for(i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << "\nDescending order: ";
    for(i = n - 1; i >= 0; i--)
        cout << a[i] << " ";

    return 0;
}