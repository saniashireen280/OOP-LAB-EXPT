#include <iostream>
#include <string>
using namespace std;

template <class T>
class stack
{
    T a[5];
    int top;

public:
    stack()
    {
        top = -1;
    }

    void Push(T x)
    {
        if (top == 4)
            cout << "stack full\n";
        else
            a[++top] = x;
    }

    void Pop()
    {
        if (top == -1)
            cout << "stack Empty\n";
        else
            cout << "Popped : " << a[top--] << endl;
    }

    void display()
    {
        for (int i = top; i >= 0; i--)
            cout << a[i] << " ";
        cout << endl;
    }
};

int main()
{
    stack<int> s1;
    s1.Push(10);
    s1.Push(20);
    s1.display();
    s1.Pop();

    stack<float> s2;
    s2.Push(2.5f);
    s2.Push(3.5f);
    s2.display();

    stack<string> s3;
    s3.Push("Hello");
    s3.Push("world");
    s3.display();

    return 0;
}
