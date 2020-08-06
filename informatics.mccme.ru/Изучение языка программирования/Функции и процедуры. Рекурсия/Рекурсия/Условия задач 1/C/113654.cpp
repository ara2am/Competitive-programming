#include <iostream>

using namespace std;

int getNumberCount (char* n)
{
	if (n[0] == '\0')
	{
		return 0;
	}

	return ((n[0] >= '0') && (n[0] <= '9')) + getNumberCount (n + 1);
}

int main ()
{
	char n[1000];
	cin >> n;

	cout << (getNumberCount (n));

	return 0;
}