//Search for a Book Using Its ID
#include <iostream>
using namespace std;

struct Book
{
    int id;
    char title[50];
    float price;
};

int main()
{
    Book b[5];
    int i, key, found = 0;

    for(i = 0; i < 5; i++)
    {
        cout << "Enter book ID, title and price: ";
        cin >> b[i].id >> b[i].title >> b[i].price;
    }

    cout << "Enter book ID to search: ";
    cin >> key;

    for(i = 0; i < 5; i++)
    {
        if(b[i].id == key)
        {
            cout << "\nBook found!\n";
            cout << "ID: " << b[i].id << endl;
            cout << "Title: " << b[i].title << endl;
            cout << "Price: " << b[i].price << endl;

            found = 1;
            break;
        }
    }

    if(found == 0)
        cout << "Book not found";

    return 0;
}