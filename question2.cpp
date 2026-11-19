#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    float balance;
public:
    void details()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Balance: ";
        cin >> balance;
    }

    void deposit()
    {
        float amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance = balance + amount;
        cout << "Amount deposited Successfully!" << endl;
    }

    void displayDetails()
    {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount b1;
    b1.details();
    b1.deposit();
    b1.displayDetails();
    return 0;
}
