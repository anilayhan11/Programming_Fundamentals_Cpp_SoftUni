#include <iostream>
using namespace std;

void printSign(int num)
{
	cout << "The number " << num << " is ";
	if (num > 0)
	{
		cout << "positive.";
	}
	else if (num < 0)
	{
		cout << "negative.";
	}
	else
	{
		cout << "zero.";
	}
}

int main()
{
	int number;
	cin >> number;

	printSign(number);
	
}
