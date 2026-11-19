#include <iostream>
using namespace std;

class Number
{
    int num;
public:
    // Default Constructor
    Number()
    {
        num = 0;
    }

    // Parameterized Constructor
    Number(int x)
    {
        num = x;
    }

    // Copy Constructor
    Number(const Number &obj)
    {
        num = obj.num;
    }

    // Move Constructor
    Number(Number &&obj)
    {
        num = obj.num;
        obj.num = 0;
    }

    // Copy assignment
    Number & operator = (const Number &obj)
    {
        num = obj.num;
        return *this;
    }

    // Move assignment
    Number & operator = (Number &&obj)
    {
        num = obj.num;
        obj.num = 0;
        return *this;
    }

    // Destructor
    ~Number()
    {
    }

    void display()
    {
        cout << num << endl;
    }
};

int main()
{
    Number n1;              // Default
    Number n2(25);          // Parameterized
    Number n3 = n2;         // Copy
    Number n4 = move(n2);   // Move

    n3.display();
    n4.display();

    return 0;
}
