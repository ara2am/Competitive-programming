#include <iostream>

using namespace std;

int main ()
{
	int n, m, k;
	cin >> n >> m >> k;

	if (m <= n)
	{
		cout << 1;
	} else if (k >= n)
	{
		cout << "NO";
	} else
	{
		int d (n - k), an (m - n);
		cout << an / d + (an % d != 0) + 1;
	}

	return 0;
}