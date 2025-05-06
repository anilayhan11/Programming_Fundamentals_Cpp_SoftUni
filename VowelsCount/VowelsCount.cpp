#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c)
{
	switch (c)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
		case 'y':
		case 'Y':
			return true;

		default: return false;
	}
}

int vowelsCount(string s)
{
	int vowelsCount = 0;

	for (int cnt = 0; cnt < s.length(); cnt++)
		vowelsCount += isVowel(s[cnt]);

	return vowelsCount;

}
 
int main()
{
	string s;
	getline(cin, s);

	cout << vowelsCount(s) << endl;

	return 0;
}
