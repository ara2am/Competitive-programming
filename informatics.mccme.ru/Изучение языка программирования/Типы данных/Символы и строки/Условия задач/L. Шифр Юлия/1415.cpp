#include <iostream>
#include <string>

using namespace std;

int main ()
{
	string s;
	int k;
	cin >> s >> k;

	for (char c : s)
	{
		cout << (char) ('A' + (c - 'A' - k + 26) % 26);
	}

	return 0;
}