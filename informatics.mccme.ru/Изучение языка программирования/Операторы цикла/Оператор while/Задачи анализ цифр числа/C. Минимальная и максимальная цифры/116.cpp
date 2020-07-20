#include <iostream>
#include <algorithm>

using namespace std;

int MinDigit (int n)
{
	if (!n)
	{
		return 0;
	}

	int result (9);
	while (n)
	{
		result = min (result, n % 10);
		n /= 10;
	}

	return result;
}

int MaxDigit (int n)
{
	if (!n)
	{
		return 0;
	}

	int result (0);
	while (n)
	{
		result = max (result, n % 10);
		n /= 10;
	}

	return result;
}

int main ()
{
	int n;
	cin >> n;

	cout << MinDigit (n) << ' ' << MaxDigit (n);

	return 0;
}