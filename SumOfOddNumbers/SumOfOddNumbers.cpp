#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
	int sum = 0;

	for (int i = 1; n != 0; i += 2, n--)
	{
	
		cout << i << endl;
		sum += i;
		
	}

	cout << "Sum: " << sum << endl;

}
