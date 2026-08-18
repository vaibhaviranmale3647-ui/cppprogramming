#include <iostream>
using namespace std;

class Product
{
    int product_id;
    int quantity;
    string name;
    float price;
    float total;

public:

    void accept()
    {
        cout << "Enter Product ID: ";
        cin >> product_id;

        cout << "Enter Product Name: ";
        cin >> name;

        cout << "Enter Quantity: ";
        cin >> quantity;

        cout << "Enter Price: ";
        cin >> price;

        calculate();   
    }

    void calculate()
    {
        total = quantity * price;
    }

    void display()
    {
        cout << "\n----- Product Details -----" << endl;
        cout << "Product ID : " << product_id << endl;
        cout << "Product Name : " << name << endl;
        cout << "Quantity : " << quantity << endl;
        cout << "Price : " << price << endl;
        cout << "Total Price : " << total << endl;
    }
};

int main()
{
    Product p;

    p.accept();
    p.display();

    return 0;
}
