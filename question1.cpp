#include <iostream>
using namespace std;
int main()
{
    // diff datatypes and variables
    int age = 19;
    float marks = 85.5;
    char grade = 'A';

    // const value
    const float PI = 3.14;

    int num;
    cout << "Enter a number: ";
    cin >> num;
    // using arithmetic operators
    int sum = num + 10;
    int product = num * 2;
    // Displaying outputs
    cout << "\nAge: " << age << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;
    cout << "PI: " << sum << endl;
    cout << "Product: " << product << endl;
    return 0;
}
