#include <iostream>
using namespace std;

class Employee
{
    int employee_id;
    string designation;
    string branch;
    float basic_salary;

public:

    void getdata()
    {
        cout << "Enter Employee ID: ";
        cin >> employee_id;

        cout << "Enter Designation: ";
        cin >> designation;

        cout << "Enter Branch: ";
        cin >> branch;

        cout << "Enter Basic Salary: ";
        cin >> basic_salary;
    }

    void displaydata()
    {
        cout << "\nEmployee ID: " << employee_id;
        cout << "\nDesignation: " << designation;
        cout << "\nBranch: " << branch;
        cout << "\nBasic Salary: " << basic_salary;
    }

    void calculateSalary()
    {
        float salary;
        salary = basic_salary + (basic_salary * 0.20);

        cout << "\nTotal Salary: " << salary;
    }
};

int main()
{
    Employee e;

    e.getdata();
    e.displaydata();
    e.calculateSalary();

    return 0;
}