#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string s;
	cin >> s;

	bool result (true);
	for (int i = 0; i <= s.length () / 2; i++)
	{
		if (s[i] != s[s.length () - 1 - i])
		{
			result = false;
			break;
		}
	}

	cout << ((result) ? "yes" : "no");

	return 0;
}