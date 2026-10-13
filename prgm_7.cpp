//Calculator Using Enum and Switch
#include <iostream>
using namespace std;

enum Operation
{
    ADD = 1,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
};

int main()
{
    float a, b;
    int choice;

    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";

    cout << "Enter choice: ";
    cin >> choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    Operation op = static_cast<Operation>(choice);

    switch(op)
    {
        case ADD:
            cout << "Result = " << a + b;
            break;

        case SUBTRACT:
            cout << "Result = " << a - b;
            break;

        case MULTIPLY:
            cout << "Result = " << a * b;
            break;

        case DIVIDE:
            if(b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Division by zero is not allowed";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}