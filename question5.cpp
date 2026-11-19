#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Circle : public Shape
{
public:
    void area()
    {
        cout << "Circle area = " << 3.14 * 2 * 2 << endl;
    }
};

class Rectangle : public Shape
{
public:
    void area()
    {
        cout << "Rectangle area = " << 4 * 5 << endl;
    }
};

class Triangle : public Shape
{
public:
    void area()
    {
        cout << "Triangle area = " << 0.5 * 4 * 6 << endl;
    }
};

int main()
{
    Circle c;
    Rectangle r;
    Triangle t;

    Shape *s;
    s = &c;
    s->area();
    s = &r;
    s->area();
    s = &t;
    s->area();

    return 0;
}
