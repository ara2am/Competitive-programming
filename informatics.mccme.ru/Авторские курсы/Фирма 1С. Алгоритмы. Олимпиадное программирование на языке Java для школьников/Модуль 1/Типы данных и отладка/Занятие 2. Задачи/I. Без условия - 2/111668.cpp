#include <iostream>

using namespace std;

int main ()
{
	int n;
	cin >> n;

	int a (0);
	for (int d (1); d <= n; d++)
	{
		a += (n % d > 0);
	}

	cout << n - a;

    return 0;
}