#include <iostream>
using namespace std;

// Base class
class Library
{
protected:
    string name = "Central Library";

public:
    void displayLibrary()
    {
        cout << "Library Name: " << name << endl;
    }
};

// Derived class 1
class Book : public Library
{
public:
    void displayBook()
    {
        cout << "Book: C++ Programming" << endl;
    }
};

// Derived class 2
class Magazine : public Library
{
public:
    void displayMagazine()
    {
        cout << "Magazine: Technology Today" << endl;
    }
};

int main()
{
    Book b;
    Magazine m;

    cout << "Book Details:" << endl;
    b.displayLibrary();
    b.displayBook();

    cout << "\nMagazine Details:" << endl;
    m.displayLibrary();
    m.displayMagazine();

    return 0;
}
