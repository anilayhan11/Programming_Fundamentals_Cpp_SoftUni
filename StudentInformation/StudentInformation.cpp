#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string name;
    int age;
    float grade;

    getline(cin, name);

    cin >> age >> grade;

    cout << setprecision(2) << fixed;
    cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;

    return 0;
}
