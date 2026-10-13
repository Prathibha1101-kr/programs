//Check Whether a Matrix is Symmetric or Not
#include <iostream>
using namespace std;

int main()
{
    int a[10][10], i, j, n;
    int symmetric = 1;

    cout << "Enter order of square matrix: ";
    cin >> n;

    if(n < 1 || n > 10)
    {
        cout << "Invalid matrix size";
        return 0;
    }

    cout << "Enter matrix elements:\n";
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            cin >> a[i][j];

    cout << "Transpose:\n";
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            cout << a[j][i] << " ";

        cout << endl;
    }

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
                symmetric = 0;
        }
    }

    if(symmetric == 1)
        cout << "Matrix is symmetric";
    else
        cout << "Matrix is not symmetric";

    return 0;
}
