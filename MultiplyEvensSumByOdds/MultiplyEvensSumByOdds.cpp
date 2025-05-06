#include <iostream>
using namespace std;

bool getDigit(int n, int & d)
{
	d = n % 10;
	return d % 2 == 0;
}


int main()
{
	int n;
	cin >> n;

	int sumOdds = 0;
	int sumEvens = 0;

	while (n)
	{
		int digit;
		if (getDigit(n, digit))
			sumEvens += digit;
		else
			sumOdds += digit;

		n /= 10;
	}

	cout << sumOdds * sumEvens << endl;

	return 0;
}
