//Demonstrate the use of structure and union

#include <iostream>
using namespace std;

struct DataStructure
{
    int i;
    float f;
    char c;
};

union DataUnion
{
    int i;
    float f;
    char c;
};

int main()
{
    cout << "Size of int = "
         << sizeof(int) << " bytes\n";

    cout << "Size of float = "
         << sizeof(float) << " bytes\n";

    cout << "Size of char = "
         << sizeof(char) << " byte\n";

    cout << "\nSize of structure = "
         << sizeof(DataStructure) << " bytes\n";

    cout << "Size of union = "
         << sizeof(DataUnion) << " bytes\n";

    return 0;
}