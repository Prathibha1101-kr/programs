//Store and Display Student Details
#include <iostream>
using namespace std;

struct Student
{
    int roll;
    char name[30];
    float m1, m2, m3;
};

int main()
{
    Student s;
    float total, average;

    cout << "Enter roll number and name: ";
    cin >> s.roll >> s.name;

    cout << "Enter three subject marks: ";
    cin >> s.m1 >> s.m2 >> s.m3;

    total = s.m1 + s.m2 + s.m3;
    average = total / 3;

    cout << "Roll Number: " << s.roll << endl;
    cout << "Name: " << s.name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;

    return 0;
}