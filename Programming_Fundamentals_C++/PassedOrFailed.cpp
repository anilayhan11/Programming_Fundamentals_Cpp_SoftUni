#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float grade;
    cin >> grade;
    cout << setprecision(2) << fixed;

    if (grade >= 3.00)
    {
        cout << "Passed!";
    }
    else
    {
        cout << "Failed!";
    }

    cout << endl;

    return 0;
}