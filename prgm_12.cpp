//Find Largest and Smallest Element in an Array Using Pointers
#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i;
    int *p;
    int largest, smallest;

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

    p = a;

    largest = *p;
    smallest = *p;

    for(i = 1; i < n; i++)
    {
        if(*(p + i) > largest)
            largest = *(p + i);

        if(*(p + i) < smallest)
            smallest = *(p + i);
    }

    cout << "Largest = " << largest << endl;
    cout << "Smallest = " << smallest;

    return 0;
}