#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main()
{
    // Vector to Store student marks
    vector<int> marks = {75, 85, 60, 90, 45};

    // map to store student names & marks
    map<string, int> students = {
        {"Ali", 75},
        {"Sara", 85},
        {"John", 60},
        {"Riya", 90},
        {"Aman", 45}
    };

    // unordered map to store student marks
    unordered_map<string, int> data = {
        {"Ali", 75},
        {"Sara", 85},
        {"John", 60},
        {"Riya", 90},
        {"Aman", 45}
    };

    // Sort algorithm
    sort(marks.begin(), marks.end());
    cout << "Sorted Marks: ";
    for (int m : marks)
        cout << m << " ";

    // Find algorithm
    auto it = find(marks.begin(), marks.end(), 85);
    if (it != marks.end())
        cout << "\n85 Marks Found";
    else
        cout << "\nMarks Not found";

    // Find_if algorithm
    auto result = find_if(marks.begin(), marks.end(), [](int m)
                          { return m >= 80; });
    if (result != marks.end())
        cout << "\nfirst mark above 80: " << *result;

    // transform algorithm
    transform(marks.begin(), marks.end(), marks.begin(), [](int m)
              { return m + 5; });
    cout << "\nmarks after adding 5:";
    for (int m : marks)
        cout << m << " ";

    // Display Map
    cout << "\n\nStudent Records:\n";
    for (auto s : students)
        cout << s.first << ":" << s.second << endl;

    // Display unordered_map
    cout << "\nUnordered Map Records:\n";
    for (auto s : data)
        cout << s.first << ":" << s.second << endl;

    return 0;
}
