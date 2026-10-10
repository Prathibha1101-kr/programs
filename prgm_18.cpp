//Find the Student with Highest Marks
#include <iostream>
using namespace std;

struct Student
{
    int roll;
    char name[30];
    float marks;
};

int main()
{
    Student s[5];
    int i, highest = 0;

    for(i = 0; i < 5; i++)
    {
        cout << "Enter roll, name and marks: ";
        cin >> s[i].roll >> s[i].name >> s[i].marks;

        if(i == 0 || s[i].marks > s[highest].marks)
            highest = i;
    }

    cout << "\nStudent with highest marks:\n";
    cout << "Roll: " << s[highest].roll << endl;
    cout << "Name: " << s[highest].name << endl;
    cout << "Marks: " << s[highest].marks << endl;

    return 0;
}