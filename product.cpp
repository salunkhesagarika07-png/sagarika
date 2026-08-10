#include <iostream>
using namespace std;

class Product
{
    string product_name;
    int product_id;
    int quantity;
    float price;

public:

    void getdata()
    {
        cout << "Enter Product Name: ";
        cin >> product_name;

        cout << "Enter Product ID: ";
        cin >> product_id;

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price: ";
        cin >> price;
    }

    void displaydata()
    {
        cout << "\nProduct Name: " << product_name;
        cout << "\nProduct ID: " << product_id;
        cout << "\nQuantity: " << quantity;
        cout << "\nPrice: " << price;
    }

    void calculateBill()
    {
        float bill;
        bill = quantity * price;

        cout << "\nTotal Bill: " << bill;
    }
};

int main()
{
    Product p;

    p.getdata();
    p.displaydata();
    p.calculateBill();

    return 0;
}