#include <iostream>
using namespace std;

class Fraction
{
    int numerator, denominator;

public:
    void accept()
    {
        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;
    }

    void add(Fraction f1, Fraction f2)
    {
        numerator = f1.numerator * f2.denominator +
                    f2.numerator * f1.denominator;

        denominator = f1.denominator * f2.denominator;
    }

    void display()
    {
        cout << "Sum = " << numerator << "/" << denominator;
    }
};

int main()
{
    Fraction f1, f2, f3;

    cout << "Enter first fraction:\n";
    f1.accept();

    cout << "\nEnter second fraction:\n";
    f2.accept();

    f3.add(f1, f2);

    cout << "\n";
    f3.display();

    return 0;
}
