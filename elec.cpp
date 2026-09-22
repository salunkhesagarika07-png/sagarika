#include <iostream>
using namespace std;

int main()
{
    string name;
    int units;
    float bill;

    cout << "Enter Consumer Name: ";
    cin >> name;

    cout << "Enter Units Consumed: ";
    cin >> units;

    if (units <= 100)
        bill = units * 5;
    else if (units

    cout << "Electricity Bill" << endl;
    cout << "Consumer Name: " << name << endl;
    cout << "Units Consumed: " << units << endl;
    cout << "Payable Amount: Rs." << bill << endl;

    return 0;
}