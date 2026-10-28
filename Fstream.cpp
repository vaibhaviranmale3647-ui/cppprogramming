#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string name;
    int age;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter age: ";
    cin >> age;

    ofstream outfile("student.txt");

    if (!outfile.is_open())
    {
        cout << "Unable to open file";
        return 1;
    }

    outfile << name << endl;
    outfile << age << endl;

    outfile.close();

    ifstream infile("student.txt");

    if (!infile.is_open())
    {
        cout << "Unable to read file";
        return 1;
    }

    getline(infile, name);
    infile >> age;

    cout << "\nStudent details from file:" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    infile.close();

    return 0;
}
