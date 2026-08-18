#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;

    void getStudent() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
    }
};

class Marks {
public:
    int marks;
   void getMarks() {
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Marks: " << marks;
    }
};

int main() {
    Student s;
    Marks m;
    s.getStudent();
    m.getMarks();
    cout << "Roll No: " << s.rollNo << endl;
    m.display();

    return 0;
}