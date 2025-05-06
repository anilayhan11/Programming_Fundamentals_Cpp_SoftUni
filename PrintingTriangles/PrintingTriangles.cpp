#include <iostream>
using namespace std;

void print1toN(int n);

int main()
{
	int num;
	cin >> num;

	for (int curr = 1; curr <= num; curr++)
		print1toN(curr);

	for (int curr = num - 1; curr > 0; curr--)
		print1toN(curr);
}

void print1toN(int n)
{
	for (int curr = 1; curr <= n; curr++)
		cout << curr << ' ';
	cout << endl;

}

