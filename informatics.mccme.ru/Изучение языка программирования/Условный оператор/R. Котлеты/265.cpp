#include <iostream>

using namespace std;

int main ()
{
	int k, m, n;
	cin >> k >> m >> n;

	if (n <= k)
	{
		cout << m * 2;
	} else
	{
		int count (2 * n);
		cout << (count / k + (count % k != 0)) * m;
	}

	return 0;
}