#include <iostream>
#include <exception>
using namespace std;

// Base Exception class
class BankingException : public exception
{
public:
    const char *what() const noexcept override
    {
        return "Banking Error Occured";
    }
};

// Insufficient Balance exception
class InsufficientBalance : public BankingException
{
public:
    const char *what() const noexcept override
    {
        return "Error: Insufficient Balance";
    }
};

// Invalid Amount Exception
class InvalidAmount : public BankingException
{
public:
    const char *what() const noexcept override
    {
        return "Error: Invalid Transaction Amount";
    }
};

int main()
{
    double balance = 5000;
    double amount;

    cout << "Enter withdrawal amount: ";
    cin >> amount;

    try
    {
        if (amount <= 0)
        {
            throw InvalidAmount();
        }
        if (amount > balance)
        {
            throw InsufficientBalance();
        }

        balance = balance - amount;
        cout << "Transaction Successful!" << endl;
        cout << "Remaining Balance: " << balance << endl;
    }
    catch (InvalidAmount &e)
    {
        cout << e.what() << endl;
    }
    catch (InsufficientBalance &e)
    {
        cout << e.what() << endl;
    }
    catch (BankingException &e)
    {
        cout << e.what() << endl;
    }

    return 0;
}
