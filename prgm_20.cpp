//Count the Occurrences of Each Element in an Array
#include <iostream>
using namespace std;

int main()
{
    int a[100], visited[100] = {0};
    int n, i, j, count;

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

    for(i = 0; i < n; i++)
    {
        if(visited[i] == 1)
            continue;

        count = 1;

        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        cout << a[i] << " occurs " << count << " times\n";
    }

    return 0;
}