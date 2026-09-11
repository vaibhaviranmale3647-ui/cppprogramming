#include <iostream>
#include <string>
using namespace std;

class CheckingAccount
{
private:
    string name;
    int accountNumber;
    double balance;
    double transactionFee;

public:

    /
    CheckingAccount(string n, int accNo, double bal, double fee)
    {
        name = n;
        accountNumber = accNo;
        balance = bal;
        transactionFee = fee;
    }

    /
    void deposit(double amount)
    {
        balance = balance + amount;

        cout << "Deposited: " << amount << endl;
    }

    /
    void withdraw(double amount)
    {
        double total = amount + transactionFee;

        if (total <= balance)
        {
            balance = balance - total;

            cout << "Withdrawn: " << amount << endl;
            cout << "Transaction Fee: " << transactionFee << endl;
            cout << "Total Deducted: " << total << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    
    void statement()
    {
        cout << "\n----- CHECKING ACCOUNT STATEMENT -----" << endl;

        cout << "Name: " <<
