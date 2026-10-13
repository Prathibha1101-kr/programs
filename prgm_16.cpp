//Store and Display Student Details
#include <iostream>
using namespace std;

union ExtraData
{
    float marks;
    char grade;
};

struct Student
{
    int roll;
    char name[30];
    int choice;
    ExtraData extra;
};

int main()
{
    Student s;

    cout << "Enter roll number: ";
    cin >> s.roll;

    cout << "Enter name: ";
    cin >> s.name;

    cout << "Choose additional information:\n";
    cout << "1. Marks\n";
    cout << "2. Grade\n";
    cin >> s.choice;

    if(s.choice == 1)
    {
        cout << "Enter marks: ";
        cin >> s.extra.marks;

        cout << "\nStudent Details\n";
        cout << "Roll: " << s.roll << endl;
        cout << "Name: " << s.name << endl;
        cout << "Marks: " << s.extra.marks << endl;
    }
    else if(s.choice == 2)
    {
        cout << "Enter grade: ";
        cin >> s.extra.grade;

        cout << "\nStudent Details\n";
        cout << "Roll: " << s.roll << endl;
        cout << "Name: " << s.name << endl;
        cout << "Grade: " << s.extra.grade << endl;
    }
    else
    {
        cout << "Invalid choice";
    }

    return 0;
}