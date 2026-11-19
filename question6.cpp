#include <iostream>
using namespace std;

class complex
{
    int real, imag;

public:
    void set(int r, int i)
    {
        real = r;
        imag = i;
    }

    void display()
    {
        cout << real << "+" << imag << "i" << endl;
    }

    // function overloading
    void add(complex c)
    {
        cout << real + c.real << "+" << imag + c.imag << "i" << endl;
    }

    void add(int n)
    {
        cout << real + n << "+" << imag << "i" << endl;
    }

    // operator overloading
    complex operator + (complex c)
    {
        complex t;
        t.real = real + c.real;
        t.imag = imag + c.imag;
        return t;
    }
};

int main()
{
    complex c1, c2, c3;
    c1.set(2, 3);
    c2.set(4, 5);

    cout << "function overloading: " << endl;
    c1.add(c2);
    c1.add(2);

    cout << "operator overloading: " << endl;
    c3 = c1 + c2;
    c3.display();

    return 0;
}
