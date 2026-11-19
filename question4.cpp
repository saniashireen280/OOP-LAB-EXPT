#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    void getPerson()
    {
        cout << "Enter name: ";
        cin >> name;
    }
};

class student : public Person
{
public:
    int roll;
    void getStudent()
    {
        cout << "Enter roll no: ";
        cin >> roll;
    }
};

// Single: Person -> student
// Multilevel: Person -> student -> GraduateStudent

class GraduateStudent : public student
{
public:
    string course;

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Course: " << course << endl;
    }
};

int main()
{
    student s;
    cout << "Single inheritance\n";
    s.getPerson();
    s.getStudent();

    GraduateStudent g;
    cout << "\nMultilevel inheritance\n";
    g.getPerson();
    g.getStudent();
    cout << "Enter Course: ";
    cin >> g.course;
    g.display();

    return 0;
}
