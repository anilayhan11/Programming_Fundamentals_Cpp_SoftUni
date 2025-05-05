#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long strongSum = 0;
    int number = n;

    //Find the factorial of each digit

    while (number)
    {
        int currentDigit = number % 10;
        number /= 10;

        long factorial = 1;
        for (int curr = 2; curr <= currentDigit; curr++)
            factorial *= curr;
        strongSum += factorial;
    }

    cout << (n == strongSum ? "yes" : "no") << endl;

    return 0;




}

