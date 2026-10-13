//Calculate Sum and Average of Elements in an Array Using Pointers
#include <iostream>
using namespace std;

int main()
{
    int n, i, sum = 0;
    int *p;
    float average;

    cout << "Enter number of elements: ";
    cin >> n;

    if(n <= 0)
    {
        cout << "Invalid size";
        return 0;
    }

    p = new int[n];

    cout << "Enter elements: ";
    for(i = 0; i < n; i++)
    {
        cin >> p[i];
        sum += p[i];
    }

    average = (float)sum / n;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    delete[] p;

    return 0;
}