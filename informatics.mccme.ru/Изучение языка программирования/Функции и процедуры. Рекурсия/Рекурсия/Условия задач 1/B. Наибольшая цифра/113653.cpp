#include <iostream>

using namespace std;

char getMaxNumber (char* n)
{
	if (n[1] == '\0')
	{
		return n[0];
	}

	char c (getMaxNumber (n + 1));
	return ((c > n[0]) ? c : n[0]);
}

int main ()
{
	char n[1000];
	cin >> n;

	cout << (getMaxNumber (n));

	return 0;
}