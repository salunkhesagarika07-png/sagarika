#include <iostream>
using namespace std;

class Student
{
    int rollno;

public:
    void get()
    {
        cout << "Enter roll no: ";
        cin >> rollno;
    }

    void display()
    {
        cout << "Roll No: " << rollno << endl;
    }
 };

class Marks
{
    int marks;

public:
    void get()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;
    Marks m;

    s.get();
    m.get();

    s.display();
    m.display();

    return 0;
}