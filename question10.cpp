#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream f;

    // open file for reading & writing
    f.open("Student.csv", ios::in | ios::out | ios::trunc);

    if (!f.is_open())
    {
        cout << "file opening failed";
        return 1;
    }

    // write Student records
    f << "101, Ali, 80\n";
    f << "102, Sara, 90\n";
    f << "103, Rahul, 75\n";

    f.flush();
    cout << "writing Position: " << f.tellp() << endl;

    // read records
    f.seekg(0, ios::beg);
    cout << "\nStudent records:\n";

    string line;
    while (getline(f, line))
    {
        cout << line << endl;
    }

    // add new student record
    f.clear();
    f.seekp(0, ios::end);

    f << "104, John, 85\n";
    f.flush();

    cout << "\nNew Record Added!";
    cout << "\nwriting position: " << f.tellp() << endl;

    // Read updated records
    f.seekg(0, ios::beg);

    cout << "\nUpdated Records:\n";
    while (getline(f, line))
    {
        cout << line << endl;
    }

    f.close();
    return 0;
}
