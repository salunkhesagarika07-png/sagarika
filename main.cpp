#include <iostream>
using namespace std;
namespace AddSub
{
    int add(int, int);
    int sub(int, int);
}

namespace MulDiv
{
    int mul(int, int);
    float divi(int, int);
}

int main()
{
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Addition = " << AddSub::add(a, b) << endl;
    cout << "Subtraction = " << AddSub::sub(a, b) << endl;
    cout << "Multiplication = " << MulDiv::mul(a, b) << endl;
    cout << "Division = " << MulDiv::divi(a, b) << endl;

    return 0;
}