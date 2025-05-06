#include <iostream>
using namespace std;

long power(int base, int pow)
{
    long result = 1;
    while (pow--)
        result *= base;
    return result;
}

int main()
{
    int base, pow;
    cin >> base >> pow;

    cout << power(base, pow) << endl;
}
