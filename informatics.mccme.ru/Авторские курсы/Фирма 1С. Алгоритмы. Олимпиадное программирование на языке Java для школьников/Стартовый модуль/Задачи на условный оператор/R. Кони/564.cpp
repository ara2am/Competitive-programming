#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
	int k, n;
	cin >> k >> n;

	if (k < 3)
	{
		cout << 0;
	} else if (k == 3)
	{
		cout << ((n == 2) ? 8 : 0);
	} else if (n == 2)
	{
		cout << 4;
	} else if (n == 3)
	{
		cout << 8;
	} else if (n == 4)
	{
		cout << (k - 3) * 4;
	} else if (n == 6)
	{
		cout << max ((k - 4) * 4, 0);
	} else
	{
		cout << ((n == 8) ? (k - 4) * (k - 4) : 0);
	}

	return 0;
}